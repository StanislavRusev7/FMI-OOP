#include <iostream>
#include "Mamal.h"
#include "Bird.h"
#include "ZooSector.h"
#include "Zoo.h"

int main() {
    Mamal* cat = new Mamal("Ivan", "Kitty", 20, 4, meat, ground);
    Bird* pelican = new Bird("Varna", "Pesho", 60, 5, both, trees);
    Mamal* dog = new Mamal("Gosho", "Dog", 40, 2, meat, ground);

    Zoo zoo("Zoo", 120, 120);

    zoo.addAnimal(*cat);
    zoo.addAnimal(*pelican);

    std::cout << zoo.getTotalCreatedAnimals() << std::endl;

    zoo.feedAnimals();

    delete pelican;
    delete cat;
    delete dog;
}