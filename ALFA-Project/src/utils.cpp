#include "utils.h"
#include <iostream>

const std::string ALFA_Utils::RED    = "\033[31m";
const std::string ALFA_Utils::GREEN  = "\033[32m";
const std::string ALFA_Utils::YELLOW = "\033[33m";
const std::string ALFA_Utils::RESET  = "\033[0m";

void ALFA_Utils::log(std::string msg) {
    std::cout << "[ALFA] " << msg << std::endl;
}

void ALFA_Utils::success(std::string msg) {
    std::cout << GREEN << "[SAFE] " << msg << RESET << std::endl;
}

void ALFA_Utils::error(std::string msg) {
    std::cout << RED << "[ALERT] " << msg << RESET << std::endl;
}