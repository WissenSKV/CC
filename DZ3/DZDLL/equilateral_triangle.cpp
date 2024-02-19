#include "equilateral_triangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {}

void EquilateralTriangle::printInfo() const {
    std::cout << "Equilateral Triangle:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" <<C << "\n";
}
