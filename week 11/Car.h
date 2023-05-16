#ifndef _CAR_H_
#define _CAR_H_
#include "CarPart.h"
#include <string>
#include <iostream>

const int MAX = 100;

class Car {
private:

	std::string mark;
	std::string model;
	CarPart** parts;
	int size;
	int currentMax;

	void resize();


public:

	Car(const char* mark, const char* model);
	~Car();
	void addPart(const CarPart& part);


};


#endif 

