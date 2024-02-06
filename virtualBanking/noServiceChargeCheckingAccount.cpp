#include "noServiceChargeCheckingAccount.h"

noServiceChargeCheckingAccount::noServiceChargeCheckingAccount(string n, string aN, float b, float int): checkingAccount(n,aN,b)
{
    //ctor
    interest = int;
}

void noServiceChargeCheckingAccount::writeCheck(float amt)
{
    if ((amt >! balance))
        {
            if (checksWritten == MAX_CHECKS_PER_MONTH)
                {
                    cout << "You have written the max checks this month" << endl;
                }
            else
                {
                    balance -= amt;
                    checksWritten +=1;
                }
        }
    else
        {
            cout << "Insufficient funds" << endl;
            cout << "R"<< balance << " is the amount in your account" << endl;
        }
}

noServiceChargeCheckingAccount::~noServiceChargeCheckingAccount()
{
    //dtor
}
