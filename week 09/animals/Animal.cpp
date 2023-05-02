#define _CRT_SECURE_NO_WARNINGS
#include "Animal.h"
#include <cstring>

void Animal::copy(const Animal& other) {
	this->age = other.age;
	int length = strlen(other.name);

	this->name = new char[length + 1];
	strcpy(this->name, other.name);
}

Animal::Animal(const char* name, unsigned age) {
	this->age = age;
	int length = strlen(name);

	this->name = new char[length + 1];
	strcpy(this->name, name);
}

Animal::Animal(const Animal& other) {
	copy(other);
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		delete[] name;
		copy(other);
	}
	return *this;
}

Animal::~Animal() {
	delete[] name;
}

std::ostream& operator<<(std::ostream& out, const Animal& animal) {
	out << animal.name << " " << animal.age << " ";
	return out;
}
