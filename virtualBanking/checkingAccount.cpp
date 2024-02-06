#include "checkingAccount.h"
#include <iostream>

using namespace std;

checkingAccount::checkingAccount(string n, string aN, float b) : bankAccount(n,aN,b)
{
    //ctor
}

void checkingAccount::makeDeposit(float amt)
{
    balance += amt;
}

void checkingAccount::withDrawMoney(float amt)
{
    balance -= amt;
}

void checkingAccount::createMonthlyStatement()
{
    cout << "Monthly statement" << endl;
}

checkingAccount::~checkingAccount()
{
    //dtor
}
