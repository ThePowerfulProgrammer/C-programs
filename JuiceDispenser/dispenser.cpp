#include "dispenser.h"
#include <iostream>

dispenser::dispenser(int nOI, float c)
{
    if (nOI && c > 0){
        numberOfItems = nOI;
        cost = c;
    }
    else
    {
        numberOfItems = 0;
        cost = 0;
    }
    //ctor
}

int dispenser::getNumberOfItems() const
{
    return numberOfItems;
}

float dispenser::getCost() const
{
    return cost;
}

bool dispenser::confirmCash(float cash)
{
    int failedAttempts = 0;
    while (cash != cost) {
        if (cash < cost)
            {
                failedAttempts +=1;
                std::cout << "You short, you need R" << cost - cash << std::endl;
                std::cout << "Enter cash: " ;
                std::cin >> cash;
            }
        else if (cash > cost)
            {
                failedAttempts +=1;
                std::cout << "You overpaid by R" << cash-cost << std::endl;
                std::cout << "Re-enter cash: ";
                std::cin >> cash;
            }
        if (failedAttempts >= 3)
            {
                return false;
            }
    }

    std::cout << "Purchase successful proceed to register" << std::endl;
    numberOfItems -=1;
    return true;
}

dispenser::~dispenser()
{
    //dtor
}
