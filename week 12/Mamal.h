#ifndef _MAMAL_H_
#define _MAMAL_H_
#include "Animal.h"
#include <iostream>
#include <cstring>

class Mamal : public Animal {
private:

	char* owner;

public:

	Mamal(const char* owner, const char* name, int weight, unsigned age, FoodType foodType, SleepSpace sleepSpace);
	Mamal(const Mamal& other);
	~Mamal();
	int eat() const override;
	Animal* copy() const override;
	void display() const override;
	AnimalType getAnimalType() const override;

};

#endif
