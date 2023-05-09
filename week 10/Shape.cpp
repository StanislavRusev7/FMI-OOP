#include "Shape.h"
#include <cstring>
#include <iostream>

Shape::Shape(const char* label) {
	this->label = label;
}

std::string Shape::getLabel() const {
	return label;
}
