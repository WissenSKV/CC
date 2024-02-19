#include "../DZDLL/Triangle.h"
#include "../DZDLL/Rectangle.h"
#include "../DZDLL/Square.h"
#include "../DZDLL/Parallelogram.h"
#include "../DZDLL/Rhombus.h"
#include "../DZDLL/RightTriangle.h"
#include "../DZDLL/IsoscelesTriangle.h"
#include "../DZDLL/equilateral_triangle.h"
#include "../DZDLL/quadrilateral.h"


#include <iostream>

int main() {
    Triangle triangle(10, 20, 30, 10,20, 30);
    triangle.printInfo();

    RightTriangle rightTriangle(10, 20, 3, 10, 20, 30);
    rightTriangle.printInfo();

    IsoscelesTriangle isoscelesTriangle(10, 20, 1, 10, 20, 10);
    isoscelesTriangle.printInfo();

    EquilateralTriangle equilateralTriangle(10, 10, 10, 10, 20, 10);
    equilateralTriangle.printInfo();

    Rectangle rectangle(10, 20, 10, 20, 10, 20, 10, 20);
    rectangle.printInfo();

    Quadrilateral quadrilateral(50, 60, 50, 60, 50, 60, 50, 60);
    quadrilateral.printInfo();

    Square square(20, 20);
    square.printInfo();

    Parallelogram parallelogram(20, 30, 20, 30, 20, 30, 20, 30);
    parallelogram.printInfo();

    Rhombus rhombus(30, 30);
    rhombus.printInfo();

    return 0;
}
