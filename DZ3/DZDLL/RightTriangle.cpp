#include "RightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c,A,B,C) {}

void RightTriangle::printInfo() const {
    std::cout << "Right Triangle:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" << C << "\n";
}
