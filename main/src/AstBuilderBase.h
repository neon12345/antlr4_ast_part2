#ifndef AstBuilderBase_H
#define AstBuilderBase_H

#include "Swift5ParserBaseVisitor.h"
#include <queue>
#include <stack>

class AstBuilderBase : public Swift5ParserBaseVisitor
{
public:
    AstBuilderBase(int32_t numindent = 4);
    virtual ~AstBuilderBase();
    void run(Swift5Parser::Top_levelContext* ctx);
protected:
    void pushNode(void* node);
    void popNode();
    void* topNode();
    uint32_t getState(antlr4::ParserRuleContext* ctx);

    template<typename T>
    static bool isEmpty(std::vector<T*>&& val)
    {
        return val.size() == 0;
    }

    template<typename T>
    static bool isEmpty(T* val)
    {
        return val == nullptr;
    }

    template<typename T>
    static void assign_text(std::vector<std::string>& vec, std::vector<T*>&& val)
    {
        for(T* item : val)
        {
            vec.push_back(item->getText());
        }
    }

    template<typename T>
    static void assign_text(std::vector<std::string>& vec, T* val)
    {
        vec.push_back(val->getText());
    }

    template<typename T>
    static void assign_text(std::string& to, T* val)
    {
        to = val->getText();
    }
private:
    void inc_indent() { indent += numindent; }
    void dec_indent() { indent -= numindent; }
    void print(const char* str);
    void print(const char* str, int32_t len);
    void newln(bool only_indent = false);
    void blockBegin();
    void blockEnd();
    int32_t indent;
    const int32_t numindent;
    std::stack<void*> stack;
};

#endif // AstBuilderBase_H
