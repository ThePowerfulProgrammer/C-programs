#include "cashRegister.h"

cashRegister::cashRegister(float cash)
{
    if (cashOnHand >= 0)
        {
            cashOnHand = cash;
        }
    else
        {
            cashOnHand = 0;
        }
    //ctor
}

void cashRegister::Sale(float cash)
{
    cashOnHand += cash;
}

float cashRegister::getCurrentBalance() const
{
    return cashOnHand;
}

cashRegister::~cashRegister()
{
    //dtor
}
