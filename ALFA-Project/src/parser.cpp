#include "parser.h"
#include <iostream>

Parser::Parser(std::vector<Token> t) : tokens(t), pos(0) {}

Token Parser::advance() { if (pos < tokens.size()) return tokens[pos++]; return tokens.back(); }

bool Parser::match(TokenType type) {
    if (tokens[pos].type == type) { pos++; return true; }
    return false;
}

void Parser::parse() {
    while (!match(TokenType::END_OF_FILE)) {
        if (match(TokenType::FN)) {
            std::cout << "ALFA Parser: Found function declaration..." << std::endl;
            advance(); // Pula o nome da função (ex: main)
            // Aqui você adicionaria a lógica para ler { e }
        }
    }
}