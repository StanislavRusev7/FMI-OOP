#include "Shoe.h"
#include <iostream>

Shoe::Shoe(const char* name, const char* model, double price, double rating, int totalCount) {

	this->name = name;
	this->model = model;
	this->price = price;
	this->rating = rating;
	this->totalCount = totalCount;

}

Shoe::Shoe() {
	this->name = "";
	this->model = "";
	this->price = -1;
	this->rating = -1;
	this->totalCount = -1;
}

Shoe& Shoe::operator=(const Shoe& other) {
	if (this != &other) {
		this->name = other.name;
		this->model = other.model;
		this->price = other.price;
		this->rating = other.rating;
		this->totalCount = other.totalCount;
	}

	return *this;
}

bool Shoe::operator==(const Shoe& other) const {
	return name == other.name && model == other.model;
}

bool Shoe::isValid() const {
	return price > 0 && rating >= 0 && totalCount >= 0;
}

void Shoe::print() const {
	std::cout << "name:" << name << ", ";
	std::cout << "model:" << model << ", ";
	std::cout << "price:" << price << ", ";
	std::cout << "rating:" << rating << ", ";
	std::cout << "totalCount:" << totalCount << std::endl;
}

void Shoe::sellPair() {
	if (totalCount > 0) {
		totalCount--;
	}
}
