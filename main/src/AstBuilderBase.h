#ifndef AstBuilderBase_H
#define AstBuilderBase_H

#include "Swift5ParserBaseVisitor.h"
#include <queue>

class AstBuilderBase : public Swift5ParserBaseVisitor
{
    class ShuntingYard
    {

    };

public:
    AstBuilderBase(int32_t numindent = 4);
    virtual ~AstBuilderBase();
    void run(Swift5Parser::Top_levelContext* ctx);
protected:
    void pushNode(antlr4::ParserRuleContext* ctx);
private:
    void treeCont();
    void runCont();
    void doRun();
    void inc_indent() { indent += numindent; }
    void dev_indent() { indent -= numindent; }
    void print(const char* str);
    void print(const char* str, int32_t len);
    void newln(bool only_indent = false);
    void blockBegin();
    void blockEnd();
    int32_t indent;
    const int32_t numindent;
    static ShuntingYard shunting;
    std::queue<antlr4::ParserRuleContext*> node_queue;
};

#endif // AstBuilderBase_H
