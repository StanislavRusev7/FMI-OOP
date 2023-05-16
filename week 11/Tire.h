#ifndef _TIRE_H_
#define _TIRE_H_
#include "CarPart.h"

class Tire : public CarPart {
private:

	int width;
	int profile;
	int diameter;


public:

	Tire(const char* manufacturer, unsigned year, int width, int profile, int diameter);
	void display() const override;

};

#endif 

