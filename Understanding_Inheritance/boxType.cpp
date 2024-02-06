#include "boxType.h"
#include <iostream>

boxType::boxType()
{
    // ctor
    height = 0.0;
}

boxType::boxType(double l, double w, double h)
        : rectangleType(l, w)
{
    // use : rectangleType() to invoke/call base ctor to initilise l,w
     if (h >= 0)
        height = h;
     else
        height = 0;
}

void boxType::setDimension(double l, double w, double h)
{
    // call base class setDimension
    rectangleType::setDimension(l, w);
    if (h >= 0)
        height = h;
     else
        height = 0;
}

void boxType::print() const
{
     // call base class print()
     rectangleType::print();
     std::cout << "; Height = " << height;
}

double boxType::getHeight() const
{
    return height;
}

double boxType::area() const
{
    // getLength() and getWidth() not overloaded therefore not needed to ::
     return 2 * (getLength() * getWidth()
     + getLength() * height
     + getWidth() * height);
}

double boxType::volume() const
{
    // used rectangleType::area()
    return rectangleType::area() * height;
}

boxType::~boxType()
{
    //dtor
}
