#define _CRT_SECURE_NO_WARNINGS
#include "Pet.h"
#include "Animal.h"
#include <cstring>
#include <iostream>

void Pet::copy(const Pet& other) {
	this->phone = other.phone;
	int length = strlen(other.owner);

	this->owner = new char[length + 1];
	strcpy(this->owner, other.owner);

}

Pet::Pet(const char*name, unsigned age, const char* owner, unsigned phone): Animal(name, age) {
	this->phone = phone;
	int length = strlen(owner);

	this->owner = new char[length + 1];
	strcpy(this->owner, owner);
}

Pet::Pet(const Pet& other): Animal(other) {
	copy(other);
}

Pet& Pet::operator=(const Pet& other) {
	if (this != &other)
	{
		Animal::operator=(other);

		delete[] owner;
		copy(other);
	}
	return *this;
}

Pet::~Pet() {
	delete[] owner;
}

std::ostream& operator<<(std::ostream& out, const Pet& pet) {
	out << pet.name << " " << pet.age << " is the pet of " << pet.owner << " " << pet.phone << std::endl;
	return out;
}
