#ifndef _ENGINE_H_
#define _ENGINE_H_
#include "CarPart.h"
#include "Piston.h"
#include <vector>

class Engine : public CarPart {
private:

	int power;
	std::vector<Piston> pistons;

public:

	Engine(const char* manufacturer, unsigned year, int power);
	void display() const override;
	void addPiston(const Piston& piston);

};

#endif 

