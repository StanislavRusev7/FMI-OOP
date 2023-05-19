#include "Zoo.h"

void Zoo::resize() {
	max *= 2;
	Animal** temp = new Animal* [max];

	for (int i = 0; i < size; i++) {
		temp[i] = animals[i];
	}

	delete[] animals;

	animals = temp;
}

Zoo::Zoo(const char* name, int kgOfPlants, int kgOfMeat) {
	this->name = name;
	this->kgOfMeat = kgOfMeat;
	this->kgOfPlants = kgOfPlants;
	this->size = 0;
	this->max = 100;

	animals = new Animal* [max];
}

Zoo::~Zoo() {
	for (int i = 0; i < size; i++) {
		delete animals[i];
	}

	delete[] animals;
}

void Zoo::addAnimal(const Animal& animal) {
	if (size == max) {
		resize();
	}

	animals[size] = animal.copy();
	size++;
}

int Zoo::getTotalCreatedAnimals() const {
	return Animal::count;
}

void Zoo::feedAnimals() {
	for (int i = 0; i < size; i++) {
		int food = animals[i]->eat();
		if (animals[i]->getFood() == plants) {
			if (kgOfPlants >= food) {
				kgOfPlants -= food;
			} else {
				std::cout << "Not enough food!" << std::endl;
			}
		} else if (animals[i]->getFood() == meat) {
			if (kgOfMeat >= food) {
				kgOfMeat -= food;
			} else {
				std::cout << "Not enough food!" << std::endl;
			}
		} else {
			if (kgOfMeat >= food && kgOfPlants >= food) {
				kgOfMeat -= food;
				kgOfPlants -= food;
			} else {
				std::cout << "Not enough food!" << std::endl;
			}
		}
	}
}
