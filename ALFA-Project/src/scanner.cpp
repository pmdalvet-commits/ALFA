#include "scanner.h"
#include <iostream>
#include <fstream>

bool AntiMalware::checkSignature(const std::string& filePath) {
    std::ifstream file(filePath, std::ios::binary);
    if (!file) return false;

    // Simulação: se o arquivo tiver "MALWARE_SIG" dentro, ele é perigoso
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    if (content.find("MALWARE_SIG") != std::string::npos) return true;

    return false;
}