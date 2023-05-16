#include "Tire.h"

Tire::Tire(const char* manufacturer, unsigned year, int width, int profile, int diameter): CarPart("Tire", manufacturer, year) {
	this->width = width;
	this->profile = profile;
	this->diameter = diameter;
}

void Tire::display() const {
	std::cout << "Id: " << id << std::endl;
	std::cout << name << " " << manunfacturer << " " << year << std::endl;
	std::cout << "Width: " << width << "mm Profile: " << profile << " Diameter: " << diameter << " inches" << std::endl;
}
