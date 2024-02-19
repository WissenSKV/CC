#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(double a, double A) : Rectangle(a, a, a, a, A, A, A, A) {}

void Rhombus::printInfo() const {
    std::cout << "Rhombus:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}
