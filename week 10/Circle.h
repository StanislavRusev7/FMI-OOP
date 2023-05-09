#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include <iostream>
#include "Shape.h"

class Circle : public Shape {
private:

	double radius;

public:

	Circle(const char* label, double radius);
	void print() const override;
	Shape* copy() override;
	double getPerimeter() const override;

};

#endif 

