#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D) : Rectangle(a, b, c, d, A, B, C, D) {}

void Parallelogram::printInfo() const {
    std::cout << "Parallelogram:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" << C << "\n";
}
