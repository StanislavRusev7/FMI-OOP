#ifndef _PISTON_H_
#define _PISTON_H_
#include "CarPart.h"

class Piston : public CarPart {
private:

	int diameter;
	int move;

public:

	Piston(const char* manufacturer, unsigned year, int diameter, int move);
	void display() const override;

};

#endif 

