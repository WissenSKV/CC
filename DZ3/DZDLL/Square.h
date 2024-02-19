#pragma once

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(double a, double A);
    virtual void printInfo() const override;
};
