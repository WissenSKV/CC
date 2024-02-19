#pragma once

#include "Rectangle.h"

class Rhombus : public Rectangle {
public:
    Rhombus(double a, double A);
    virtual void printInfo() const override;
};
