#ifndef SERVICECHARGECHECKINGACCOUNT_H
#define SERVICECHARGECHECKINGACCOUNT_H
#include <ctime>
#include "checkingAccount.h"


class serviceChargeCheckingAccount : public checkingAccount
{
    public:
        serviceChargeCheckingAccount(string n="", string aN="xxxxxxxxx", float b=0);

        void writeCheck(float amt);
        //string getDate();

        virtual ~serviceChargeCheckingAccount();

    protected:
        const int MAX_CHECKS_PER_MONTH = 5;
    private:
        // does not pay any interest
        int checksWritten;
};

#endif // SERVICECHARGECHECKINGACCOUNT_H
