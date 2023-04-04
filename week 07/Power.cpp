#include "Power.h"
#include <string>

Power::Power(const std::string& name, int damage) {
	this->name = name;
	this->damage = damage;
}

const std::string& Power::getName() const {
	return name;
}

int Power::getDamage() const {
	return damage;
}

bool Power::operator<(const Power& other) const {
	return damage < other.damage;
}

Power& Power::operator=(const Power& other) {
	name = name;
	damage = other.damage;
	return *this;
}




