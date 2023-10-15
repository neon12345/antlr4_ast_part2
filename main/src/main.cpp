#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

#include <antlr4-runtime.h>
#include <fstream>

#include "Swift5Parser.h"
#include "Swift5Lexer.h"
#include "AstBuilder.h"

using namespace antlr4;

int main(int argc, char** argv) {
    if(argc <= 1) return 1;
    std::string inputFile = argv[1];
    std::fstream fs;
    fs.open (inputFile, std::fstream::in | std::fstream::out | std::fstream::app);

    ANTLRInputStream* input = new ANTLRInputStream(fs);
    Swift5Lexer* lexer = new Swift5Lexer(input);
    CommonTokenStream* tokens = new CommonTokenStream(lexer);
    Swift5Parser* parser = new Swift5Parser(tokens);
    auto* root = parser->top_level();

    AstBuilder visitor;

    AstBuilder::Top_level* top = std::any_cast<AstBuilder::Top_level*>(visitor.visit(root));
    top->print();
    delete top;
    return 0;
}
