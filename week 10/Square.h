#ifndef _SQUARE_H_
#define _SQUARE_H_
#include <iostream>
#include "Shape.h"

class Square : public Shape {

private: 

	double a;

public:

	Square(const char* label, double a);
	void print() const override;
	Shape* copy() override;
	double getPerimeter() const override;

};

#endif 

