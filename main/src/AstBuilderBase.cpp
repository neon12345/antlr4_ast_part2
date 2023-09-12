#include "AstBuilderBase.h"
#include <stdio.h>
#include <csetjmp>

using namespace antlr4;

static std::jmp_buf run_stop;
static std::jmp_buf tree_stop;

void print_token(Token* token) {
    std::string s = token->getText();
    fprintf(stderr, "#%s#\n", s.c_str());
}

void print_text(ParserRuleContext* ctx) {
    Token* start = ctx->start;
    Token* stop = ctx->stop;
    std::string s = start->getInputStream()->getText(misc::Interval(start->getStartIndex(), stop->getStopIndex()));
    fprintf(stderr, "#%s#\n", s.c_str());
}


AstBuilderBase::AstBuilderBase(int32_t numindent)
    : indent(0)
    , numindent(numindent)
{

}

AstBuilderBase::~AstBuilderBase()
{

}

volatile void *x;
void AstBuilderBase::run(Swift5Parser::Top_levelContext* ctx)
{
    if(setjmp(run_stop) != 0)
    {
        doRun();
        return;
    }

    {
        // reverse stack space for the run path
        x = __builtin_alloca(4096<<3);
        (void)x;

        visit(ctx);
    }
}

void AstBuilderBase::doRun()
{
    while(true)
    {
        if(node_queue.size())
        {
            auto* ctx = node_queue.front();
            node_queue.pop();
            newln();
            newln();
            print("node:");
            newln();
            print_text(ctx);
        }
        else
        {
            treeCont();
        }
    }
}

void AstBuilderBase::treeCont()
{
    if(setjmp(run_stop) != 1)
        longjmp(tree_stop, 1);
}

void AstBuilderBase::runCont()
{
    if(setjmp(tree_stop) != 1)
        longjmp(run_stop, 1);
}

void AstBuilderBase::pushNode(antlr4::ParserRuleContext* ctx)
{
    node_queue.push(ctx);
    if(node_queue.size() > 4)
    {
        runCont();
    }
}

void AstBuilderBase::blockBegin()
{
    print(" {");
    inc_indent();
    newln();
}

void AstBuilderBase::blockEnd()
{
    dev_indent();
    newln();
    print("}");
}

void AstBuilderBase::print(const char* str)
{
    fprintf(stdout, "%s", str);
}


void AstBuilderBase::print(const char* str, int32_t len)
{
    fwrite(str, len, 1, stdout);
}

void AstBuilderBase::newln(bool only_indent)
{
    if(!only_indent)
        fprintf(stdout, "\n");
    for(int32_t i = 0; i < indent; i++)
        fprintf(stdout, " ");
}


