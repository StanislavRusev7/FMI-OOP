#ifndef _CARPART_H_
#define _CARPART_H_
#include <string>
#include <iostream>

class CarPart {
protected:

	std::string name;
	std::string manunfacturer;
	unsigned year;
	unsigned id;

private:

	static int partCounter;

public:

	CarPart(const char* name, const char* manufacturer, unsigned year);

	virtual void display() const = 0;

	virtual ~CarPart();
};

#endif

