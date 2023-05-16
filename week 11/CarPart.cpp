#include "CarPart.h"
#include <iostream>

int CarPart::partCounter = 0;

CarPart::CarPart(const char* name, const char* manufacturer, unsigned year) {

	this->name = name;
	this->manunfacturer = manufacturer;
	this->year = year;
	this->id = ++partCounter;

}

CarPart::~CarPart() { }
