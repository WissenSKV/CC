#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double a, double b, double c, double A, double B, double C) : a(a), b(b), c(c), A(A), B(B), C(C) {}

void Triangle::printInfo() const {
    std::cout << "Triangle:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" << C << "\n";
}
