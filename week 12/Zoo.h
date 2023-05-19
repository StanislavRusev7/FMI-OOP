#ifndef _ZOO_H_
#define _ZOO_H_
#include <iostream>
#include <string>
#include "Animal.h"

class Zoo {
private:

	std::string name;
	Animal** animals;
	int size;
	int max;
	int kgOfPlants;
	int kgOfMeat;

	void resize();

public:

	Zoo(const char* name, int kgOfPlants, int kgOfMeat);
	~Zoo();
	void addAnimal(const Animal& animal);
	int getTotalCreatedAnimals() const;
	void feedAnimals();




};


#endif

