#include <iostream>
#include "RelationElement.hpp"

int main() {
    RelationElement<int> r1(2, 6, "is smaller than");
    RelationElement<int> r2(6, 3, "is divisible by");
    r1.print();
    r2.print();
    (r1*r2).print();
}

