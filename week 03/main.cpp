#include "MyString.h"
#include <iostream>

int main() {
    MyString ms("hello");
    MyString emptyStr = ms.substr(1, 3);

    ms.print();
    emptyStr.print();

    std::cout << ms.find('e') << std::endl;
}
