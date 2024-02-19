#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {}

void IsoscelesTriangle::printInfo() const {
    std::cout << "Isosceles Triangle:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" << C << "\n";
}
