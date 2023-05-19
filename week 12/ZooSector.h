#ifndef _ZOOSECTOR_H_
#define _ZOOSECTOR_H_
#include <vector>
#include <iostream>
#include "Animal.h"

class ZooSector {
private:

	std::vector<Animal*> animals;
	AnimalType type;
	int x, y;

public:

	ZooSector(AnimalType type, int x, int y);
	~ZooSector();
	void addAnimal(const Animal& animal);
	void displayAnimals() const;

};


#endif

