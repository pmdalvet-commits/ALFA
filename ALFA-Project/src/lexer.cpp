#include "lexer.h"
#include <cctype>

Lexer::Lexer(const std::string& source) : src(source), pos(0) {}

std::vector<Token> Lexer::tokenize() {
    std::vector<Token> tokens;
    while (pos < src.length()) {
        char current = src[pos];

        if (isspace(current)) { pos++; continue; }

        if (isalpha(current)) {
            std::string word;
            while (isalnum(src[pos])) word += src[pos++];
            
            if (word == "fn") tokens.push_back({TokenType::FN, word});
            else if (word == "let") tokens.push_back({TokenType::LET, word});
            else if (word == "Console") tokens.push_back({TokenType::CONSOLE_OUT, word});
            else tokens.push_back({TokenType::ID, word});
            continue;
        }
        
        if (current == '{') { tokens.push_back({TokenType::LBRACE, "{"}); pos++; continue; }
        if (current == '}') { tokens.push_back({TokenType::RBRACE, "}"}); pos++; continue; }
        // ... Adicionar os outros símbolos aqui
        pos++;
    }
    tokens.push_back({TokenType::END_OF_FILE, ""});
    return tokens;
}