#ifndef HIGHINTERESTCHECKINGACCOUNT_H
#define HIGHINTERESTCHECKINGACCOUNT_H

#include <noServiceChargeCheckingAccount.h>


class highInterestCheckingAccount : public noServiceChargeCheckingAccount
{
    public:
        highInterestCheckingAccount(string n="", string aN="xxxxxxxxx", float b=1000, float int=0.3);
        ~highInterestCheckingAccount();

    protected:

    private:
};

#endif // HIGHINTERESTCHECKINGACCOUNT_H
