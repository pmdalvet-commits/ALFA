#ifndef PARSER_H
#define PARSER_H
#include "lexer.h"
#include <vector>

class Parser {
public:
    Parser(std::vector<Token> tokens);
    void parse(); // Verifica a sintaxe Rust/C#
private:
    std::vector<Token> tokens;
    size_t pos;
    Token advance();
    bool match(TokenType type);
};
#endif