#include "quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D) : Rectangle(a, b, c, d, A,B,C,D) {}
void Quadrilateral::printInfo() const {
    std::cout << "Quadrilateral:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" << C << "\n";
}
