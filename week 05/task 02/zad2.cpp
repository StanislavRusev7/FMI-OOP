#include <iostream>
#include <fstream>

const int MAX_LENGTH = 1024; // not good practice but for this task should be enough

int main() {
    std::ifstream ifStream;
    ifStream.open("zad2.cpp");

    if (!ifStream.is_open()) {
        std::cout << "File cannot be opened!" << std::endl;
        return -1;
    }

    char currentLine[MAX_LENGTH];

    while (ifStream.getline(currentLine, MAX_LENGTH)) {
        std::cout << currentLine << std::endl;
    }

    ifStream.close();
    return 0;
}
