#pragma once
#include "Rectangle.h"

class Parallelogram : public Rectangle {
public:
    Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D);
    virtual void printInfo() const override;
};