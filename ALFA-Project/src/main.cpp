#include <iostream>
#include <fstream>
#include <sstream>
#include "lexer.h"
#include "scanner.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "ALFA Language v0.1 - Use: ALFA <file.alfa>" << std::endl;
        return 1;
    }

    // Lendo o arquivo .alfa da Patrícia/André
    std::ifstream file(argv[1]);
    std::stringstream buffer;
    buffer << file.rdbuf();

    // Iniciando o Lexer (A análise do Rust/C#)
    Lexer lexer(buffer.str());
    std::vector<Token> tokens = lexer.tokenize();

    std::cout << "ALFA: File " << argv[1] << " loaded. Tokens: " << tokens.size() << std::endl;
    std::cout << "Status: Ready to Protect." << std::endl;

    return 0;
}