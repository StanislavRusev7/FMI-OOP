#include "Circle.h"

const double PI = 3.14;

Circle::Circle(const char* label, double radius): Shape(label) {
	this->radius = radius;
}

void Circle::print() const {
	std::cout << "   -   " << std::endl;
	std::cout << " /   \\ " << std::endl;
	std::cout << "|     |" << std::endl;
	std::cout << " \\ _ / " << std::endl;
}

Shape* Circle::copy() {
	return new Circle(*this);
}

double Circle::getPerimeter() const {
	return 2 * PI * radius;
}
