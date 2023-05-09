#include "Square.h"

Square::Square(const char* label, double a): Shape(label) {

	this->a = a;

}

void Square::print() const {
	std::cout << " __ " << std::endl;
	std::cout << "|  |" << std::endl;
	std::cout << "|__|" << std::endl;
 }

Shape* Square::copy() {
	return new Square(*this);
}

double Square::getPerimeter() const {
	return a*4;
}
