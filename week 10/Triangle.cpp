#include "Triangle.h"
#include <iostream>

Triangle::Triangle(const char* label, double a, double b, double c): Shape(label) {
	this->a = a;
	this->b = b;
	this->c = c;
}

void Triangle::print() const {

	std::cout << " /\\ " << std::endl;
	std::cout << "/__\\" << std::endl;

}

Shape* Triangle::copy() {
	return new Triangle(*this);
}

double Triangle::getPerimeter() const {
	return a + b + c;
}
