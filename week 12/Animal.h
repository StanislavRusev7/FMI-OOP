#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream>
#include <cstring>

enum FoodType {
	plants,
	meat,
	both
};

enum SleepSpace {
	ground,
	trees,
	water
};

enum AnimalType {
	mamal,
	bird
};

class Animal {

private:

	char* name;
	int weight;
	unsigned age;
	FoodType foodType;
	SleepSpace sleepSpace;

protected:

	void displayAnimal() const;
	int getWeight() const;

public:

	static int count;
	Animal(const char* name, int weight, unsigned age, FoodType foodType, SleepSpace sleepSpace);
	Animal(const Animal& other);
	virtual ~Animal();
	virtual Animal* copy() const = 0;
	virtual int eat() const = 0;
	virtual void display() const = 0;
	virtual AnimalType getAnimalType() const = 0;
	FoodType getFood() const;

};

#endif