#ifndef UTILS_H
#define UTILS_H

#include <string>

// No Programês: public class ALFA_Utils
class ALFA_Utils {
public:
    // Cores para o terminal (ANSI Escape Codes)
    static const std::string RED;
    static const std::string GREEN;
    static const std::string YELLOW;
    static const std::string RESET;

    // Funções de Log para o André e Patrícia verem o que acontece
    static void log(std::string message);
    static void success(std::string message);
    static void error(std::string message);
};

#endif