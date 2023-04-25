#include <iostream>
#include "Set.hpp"

template <typename T>
void swap(T& a, T& b) {
    T c = a;
    a = b;
    b = c;
}

int main() {
    Set<int> set;
    set.add(4);
    set.add(5);
    set.add(4);

    Set<int> set2;
    set2.add(4);
    set2.add(3);

    std::cout << (set2 < set) << std::endl;
}
