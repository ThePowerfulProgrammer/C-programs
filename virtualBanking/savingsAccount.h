#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <bankAccount.h>


class savingsAccount : public bankAccount
{
    public:
        savingsAccount(string n="", string aN="xxxxxxxxx", float b=0, float int=0.07);

        ~savingsAccount();

    protected:
        float interest;

    private:
};

#endif // SAVINGSACCOUNT_H
