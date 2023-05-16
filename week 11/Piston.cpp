#include "Piston.h"

Piston::Piston(const char* manufacturer, unsigned year, int diameter, int move): CarPart("Piston", manufacturer, year) {

	this->diameter = diameter;
	this->move = move;

}

void Piston::display() const {
	std::cout << "Id: " << id << std::endl;
	std::cout << name << " " << manunfacturer << " " << year << std::endl;
	std::cout << "Diameter: " << diameter << "mm Move: " << move << "mm" << std::endl;
}
