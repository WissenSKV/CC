#pragma once

#include "Figure.h"

class Triangle : public Figure {
protected:
    double a, b, c,A,B,C;
public:
    Triangle(double a, double b, double c, double A, double B, double C);
    virtual void printInfo() const override;
};