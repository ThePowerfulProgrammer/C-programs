#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "bankAccount.h"


class checkingAccount : public bankAccount
{
    public:
        checkingAccount(string n="", string aN="xxxxxxxxx", float b=0);

        void makeDeposit(float amt);
        void withDrawMoney(float amt);
        void createMonthlyStatement();

        virtual void writeCheck(float amt) = 0;

        ~checkingAccount();

    protected:

    private:
};

#endif // CHECKINGACCOUNT_H
