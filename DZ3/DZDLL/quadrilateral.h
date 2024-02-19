#pragma once

#include "Rectangle.h"

class Quadrilateral : public Rectangle {
public:
    Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D);
    virtual void printInfo() const override;
};