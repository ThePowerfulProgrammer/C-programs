#include "rectangleType.h"
#include <iostream>

int rectangleType::y = 0;

rectangleType::rectangleType()
{
    //ctor
    length = 0;
    width = 0;
}

rectangleType::rectangleType(double l, double w)
{
    length = l;
    width = w;
    // increment static var
    y++;
}

void rectangleType::setDimension(double l, double w)
{
    if (l>= 0)
        {
            length = l;
        }
    else
        {
            length = 0;
        }
    if (w>= 0)
        {
            width = w;
        }
    else
        {
            width = 0;
        }
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
        return 2 * (length * width);
}

void rectangleType::print() const
{
    std::cout << "Length = " << length << "; Width = " << width;
}



rectangleType::~rectangleType()
{
    //dtor
}
