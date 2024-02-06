#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>

using namespace std;

class bankAccount
{
    public:
        bankAccount(string s="", string aN="xxxxxxxxx", float b=0);

        string getName();
        string getAccountNumber();
        float getBalance();

        virtual void makeDeposit(float amt) = 0;
        virtual void withDrawMoney(float amt) = 0;
        virtual void createMonthlyStatement() = 0;


        virtual ~bankAccount();

    protected:
        string name;
        string accountNumber;
        float balance;

    private:


};

#endif // BANKACCOUNT_H
