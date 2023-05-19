#ifndef _BIRD_H_
#define _BIRD_H_
#include <string>
#include <iostream>
#include "Animal.h"

class Bird : public Animal {
private:
	std::string city;

public:

	Bird(const char* city, const char* name, int weight, unsigned age, FoodType foodType, SleepSpace sleepSpace);
	Bird(const Bird& other);
	void display() const override;
	int eat() const override;
	Animal* copy() const override;
	AnimalType getAnimalType() const override;
};

#endif

