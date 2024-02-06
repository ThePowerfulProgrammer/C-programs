#include "savingsAccount.h"

savingsAccount::savingsAccount(string n, string aN, float b, float int):bankAccount(n,aN,b)
{
    //ctor
    interest = int;
}

savingsAccount::~savingsAccount()
{
    //dtor
}
