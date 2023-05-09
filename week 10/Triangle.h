#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_
#include <iostream>
#include "Shape.h"

class Triangle : public Shape {
private:

	double a, b, c;

public:

	Triangle(const char* label, double a, double b, double c);
	void print() const override;
	Shape* copy() override;
	double getPerimeter() const override;
};

#endif

