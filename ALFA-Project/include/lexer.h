#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>

enum class TokenType {
    FN, LET, IF, ELSE,        // Estilo Rust
    ID, STRING, NUMBER,       // Identificadores e valores
    LBRACE, RBRACE, LPAREN, RPAREN, // { } ( )
    SEMICOLON, DOT, EQUAL,    // ; . =
    CONSOLE_OUT, SCANNER,     // Comandos C# style
    END_OF_FILE
};

struct Token {
    TokenType type;
    std::string value;
};

class Lexer {
public:
    Lexer(const std::string& source);
    std::vector<Token> tokenize();
private:
    std::string src;
    size_t pos;
};

#endif