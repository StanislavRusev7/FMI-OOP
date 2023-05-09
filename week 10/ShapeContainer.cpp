#include "ShapeContainer.h"
#include <vector>

void ShapeContainer::addShape(Shape* shape) {
	list.push_back(shape->copy());
}

void ShapeContainer::showPerimeters() const {
	for (int i = 0; i < list.size(); i++) {
		std::cout << list.at(i)->getLabel() << " - " << list.at(i)->getPerimeter() << std::endl;
	}
}

void ShapeContainer::printShapes() const {
	for (int i = 0; i < list.size(); i++) {
		list.at(i)->print();
	}
}

ShapeContainer::~ShapeContainer() {
	for (int i = 0; i < list.size(); i++) {
		delete list.at(i);
	}
}
