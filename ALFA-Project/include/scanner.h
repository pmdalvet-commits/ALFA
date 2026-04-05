#ifndef SCANNER_H
#define SCANNER_H

#include <string>

class AntiMalware {
public:
    static bool quickScan(const std::string& path);
    static bool checkSignature(const std::string& filePath);
};

#endif