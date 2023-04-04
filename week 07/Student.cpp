#include "Student.h"
#include <string>

Student::Student() {
	name = "";
	house = "";
	power = nullptr;
	health = 100;
}

Student::Student(const std::string& name) {
	this->name = name;
	house = "";
	power = nullptr;
	health = 100;
}

const std::string& Student::getName() const {
	return name;
}

const std::string& Student::getHouse() const {
	return house;
}

void Student::setHouse(const std::string& house) {
	this->house = house;
}

int Student::getHealth() const {
	return health;
}

void Student::takeDamage(int damage) {
	health -= damage;
	if (health < 0) {
		health = 0;
	}
}

void Student::setPower(const Power* power) {
	this->power = power;
}

const Power* Student::getPower() const {
	return power;
}

bool Student::isAlive() const {
	return health > 0;
}

int Student::attack() const {
	if (power == nullptr) {
		return 0;
	}
	return power->getDamage();
}

Student& Student::operator=(const Student& other) {
	name = other.name;
	house = other.house;
	health = other.health;
	power = other.power;
	return *this;
}


