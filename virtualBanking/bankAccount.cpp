#include "bankAccount.h"
#include <iostream>

using namespace std;

bankAccount::bankAccount(string n, string aN, float b)
{
    //ctor
    name = n;
    if (b >= 0)
        {balance = b;}
    else
        { balance = 0;}

    if (aN.length() != 9)
        {
            aN = "xxxxxxxxx";
            accountNumber = aN;
        }
    else
        {
            accountNumber = aN;
        }
}

string bankAccount::getName()
{
    return name;
}

string bankAccount::getAccountNumber()
{
    return accountNumber;
}

float bankAccount::getBalance()
{
    return balance;
}

bankAccount::~bankAccount()
{
    //dtor
}
