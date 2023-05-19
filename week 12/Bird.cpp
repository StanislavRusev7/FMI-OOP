#include "Bird.h"

Bird::Bird(const char* city, const char* name, int weight, unsigned age, FoodType foodType, SleepSpace sleepSpace): Animal(name, weight, age, foodType, sleepSpace) {
	this->city = city;
}

Bird::Bird(const Bird& other): Animal(other) {
	this->city = other.city;
}

void Bird::display() const {
	std::cout << "Bird rescued from: " << city << std::endl;
	displayAnimal();
}

int Bird::eat() const {
	return (getWeight() / 15) + 1;
}

Animal* Bird::copy() const {
	return new Bird(*this);
}

AnimalType Bird::getAnimalType() const {
	return bird;
}
