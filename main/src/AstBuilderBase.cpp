#include "AstBuilderBase.h"
#include <stdio.h>
#include <csetjmp>

using namespace antlr4;

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

void AstBuilderBase::pushNode(void *node)
{
    stack.push(node);
}

void AstBuilderBase::popNode()
{
    stack.pop();
}

void *AstBuilderBase::topNode()
{
    return stack.top();
}

uint32_t AstBuilderBase::getState(antlr4::ParserRuleContext* ctx)
{
    return ctx->invokingState != -1 ? ctx->invokingState : 0xFFFFFFFE;
}

void AstBuilderBase::blockBegin()
{
    print(" {");
    inc_indent();
    newln();
}

void AstBuilderBase::blockEnd()
{
    dec_indent();
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


