#include <iostream>
#include "Pet.h"
#include "Animal.h"

int main() {
    Pet pet("Rex", 2, "Ivan", 88657);
    Animal animal("Tim", 6);

    std::cout << pet;
}
