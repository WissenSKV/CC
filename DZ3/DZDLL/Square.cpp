#include "Square.h"
#include <iostream>

Square::Square(double a, double A) : Rectangle(a, a, a, a, A, A, A, A) {}

void Square::printInfo() const {
    std::cout << "Square:\n";
    std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Sides: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}
