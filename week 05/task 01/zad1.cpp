#include <iostream>
#include <fstream>

int main() {
    std::ifstream ifStream;

    ifStream.open("zad1.txt");

    if (!ifStream.is_open()) {
        std::cout << "Could not open file" << std::endl;
        return -1;
    }

    ifStream.seekg(0, std::ios::end);
    int size = ifStream.tellg();
    std::cout << "The file size is: " << size << " bytes" << std::endl;

    ifStream.close();

    return 0;
}
