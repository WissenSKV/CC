#pragma once

#include "Figure.h"

class Rectangle : public Figure {
protected:
    double a, b, c, d, A,B,C,D;
public:
    Rectangle(double a, double b, double c, double d, double A, double B, double C, double D);
    virtual void printInfo() const override;
};