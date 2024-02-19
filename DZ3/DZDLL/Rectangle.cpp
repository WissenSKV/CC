#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double a, double b, double c, double d, double A, double B, double C, double D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

void Rectangle::printInfo() const {
    std::cout << "Rectangle:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}
