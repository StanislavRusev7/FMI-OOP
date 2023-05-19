#define _CRT_SECURE_NO_WARNINGS
#include "Mamal.h"

Mamal::Mamal(const char* owner, const char* name, int weight, unsigned age, FoodType foodType, SleepSpace sleepSpace): Animal(name, weight, age, foodType, sleepSpace) {
	int len = strlen(owner);
	this->owner = new char[len + 1];
	strcpy(this->owner, owner);
}

Mamal::Mamal(const Mamal& other): Animal(other) {
	int len = strlen(other.owner);
	this->owner = new char[len + 1];
	strcpy(this->owner, other.owner);
}

Mamal::~Mamal() {
	delete[] owner;
}

int Mamal::eat() const {
	return ((getWeight() / 10)) + 1;
}

Animal* Mamal::copy() const {
	return new Mamal(*this);
}

void Mamal::display() const {
	std::cout << "Mamal adopted by: " << owner << std::endl;
	displayAnimal();
}

AnimalType Mamal::getAnimalType() const {
	return mamal;
}
