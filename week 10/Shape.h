#ifndef _SHAPE_H_
#define _SHAPE_H_
#include <cstring>
#include <iostream>

class Shape {
private:

	std::string label;

public:

	Shape(const char* label);
	std::string getLabel() const;
	virtual void print() const = 0;
	virtual Shape* copy() = 0;
	virtual double getPerimeter() const = 0;

};

#endif

