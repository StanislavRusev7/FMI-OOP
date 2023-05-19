#define _CRT_SECURE_NO_WARNINGS
#include "Animal.h"

int Animal::count = 0;

void Animal::displayAnimal() const {
    std::cout << name << " " << weight << " " << age << std::endl;
}

int Animal::getWeight() const {
    return weight;
}

Animal::Animal(const char* name, int weight, unsigned age, FoodType foodType, SleepSpace sleepSpace) {
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);

	this->weight = weight;
	this->age = age;
	this->foodType = foodType;
	this->sleepSpace = sleepSpace;
	this->count++;
}

Animal::Animal(const Animal& other) {
	int len = strlen(other.name);
	this->name = new char[len + 1];
	strcpy(this->name, other.name);

	this->weight = other.weight;
	this->age = other.age;
	this->foodType = other.foodType;
	this->sleepSpace = other.sleepSpace;
	// we wont increase count here, because we only use this for adding animals to zoos
}

Animal::~Animal() {
	delete[] name;
}

FoodType Animal::getFood() const {
	return foodType;
}
