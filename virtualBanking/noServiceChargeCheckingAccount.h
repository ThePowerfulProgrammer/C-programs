#ifndef NOSERVICECHARGECHECKINGACCOUNT_H
#define NOSERVICECHARGECHECKINGACCOUNT_H

#include <checkingAccount.h>


class noServiceChargeCheckingAccount : public checkingAccount
{
    public:
        noServiceChargeCheckingAccount(string n="", string aN="xxxxxxxxx", float b=100, float int=0.025);
        void writeCheck(float amt);
        ~noServiceChargeCheckingAccount();

    protected:
        float interest; // int paid off account

    private:
};

#endif // NOSERVICECHARGECHECKINGACCOUNT_H
