#ifndef _SHAPECONTAINER_H_
#define _SHAPECONTAINER_H_
#include <iostream>
#include <vector>
#include "Shape.h"

class ShapeContainer {
private:
	std::vector<Shape*> list;

public:
	void addShape(Shape* shape);
	void showPerimeters() const;
	void printShapes() const;
	~ShapeContainer();
};


#endif

