#include "Car.h"

Car::Car(const char* mark, const char* model) {

	this->mark = mark;
	this->model = model;
	this->size = 0;
	this->currentMax = MAX;

	parts = new CarPart * [MAX];
}

Car::~Car() {
	for (int i = 0; i < size; i++) {
		delete parts[i];
	}

	delete[] parts;
}

void Car::addPart(const CarPart& part) {

	if (size < currentMax) {
		//parts[size] = part.copy();
		size++;
	}
	else {
		resize();
	}

}
