#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include "ShapeContainer.h"

int main() {
    Triangle* triangle = new Triangle("Triangle A", 1, 2, 3);

    Square* square = new Square("Square A", 5);

    Circle* circle = new Circle("Circle A", 2);

    Triangle* triangleB = new Triangle("Triangle B", 3, 4, 5);

    ShapeContainer container = ShapeContainer();

    container.addShape(triangle);
    container.addShape(square);
    container.addShape(circle);
    container.addShape(triangleB);

    container.showPerimeters();
    container.printShapes();

    delete triangle;
    delete square;
    delete circle;
    delete triangleB;
    return 0;
}
