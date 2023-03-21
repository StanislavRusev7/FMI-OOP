#include "Storage.h"
#include "Shoe.h"
#include <iostream>

Storage::Storage(int maxCount) {
	shoes = new Shoe[maxCount];
	this->maxCount = maxCount;
	currentCount = 0;
}

Storage::~Storage() {
	destroy();
}

Storage::Storage(const Storage& other) {
	copy(other);
}

Storage& Storage::operator=(const Storage& other) {
	if (this != &other) {
		destroy();
		copy(other);
	}

	return *this;
}

bool Storage::contains(const Shoe& shoe) {

	if (!shoe.isValid()) {
		return false;
	}

	for (int i = 0; i < currentCount; i++) {
		if (shoes[i] == shoe) {
			return true;
		}
	}

	return false;
}

void Storage::addNew(const Shoe& shoe) {
	if (contains(shoe)) {
		throw std::exception("Shoe is already in the storage");
	}

	if (currentCount == maxCount) {
		throw std::exception("Storage is full");
	}

	shoes[currentCount] = shoe;
	currentCount++;
}

void Storage::sell(const Shoe& shoe) {

	if (!contains(shoe)) {
		throw std::exception("Shoe is not in the storage");
	}

	for (int i = 0; i < currentCount; i++) {
		if (shoes[i] == shoe) {
			shoes[i].sellPair();
		}
	}


}

void Storage::copy(const Storage& other) {
	shoes = new Shoe[other.maxCount];
	maxCount = other.maxCount;
	currentCount = other.currentCount;
	for (int i = 0; i < currentCount; i++) {
		shoes[i] = other.shoes[i];
	}
}

void Storage::destroy() {
	delete[] shoes;
}


