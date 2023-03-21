#ifndef _SHOE_HPP
#define _SHOE_HPP
#include <iostream>

class Shoe {

public:
	Shoe(const char* name, const char* model, double price, double rating, int totalCount);
	Shoe();
	Shoe& operator=(const Shoe& other);
	bool operator==(const Shoe& other) const;
	bool isValid() const;
	void print() const;
	void sellPair();

private:

	std::string name;
	std::string model;
	double price;
	double rating;
	int totalCount;

};

#endif
