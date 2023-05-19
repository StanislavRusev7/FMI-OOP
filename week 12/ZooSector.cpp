#include "ZooSector.h"
#include "Mamal.h"
#include "Bird.h"

ZooSector::ZooSector(AnimalType type, int x, int y) {
	this->type = type;
	this->x = x;
	this->y = y;
}

ZooSector::~ZooSector() {
	for (int i = 0; i < animals.size(); i++) {
		delete animals[i];
	}
}

void ZooSector::addAnimal(const Animal& animal) {
	if (animal.getAnimalType() == type) {
		animals.push_back(animal.copy());
	} else {
		std::cout << "Wrong animal type!" << std::endl;
	}
}

void ZooSector::displayAnimals() const {
	for (int i = 0; i < animals.size(); i++) {
		animals[i]->display();
	}
}
