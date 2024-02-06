#ifndef CASHREGISTER_H
#define CASHREGISTER_H


class cashRegister
{
    public:
        cashRegister(float cash);
        // ctor sets cashOnHand
        ~cashRegister();
        void Sale(float cash);
        // increments cashOnHand by cash
        float getCurrentBalance() const ;
        // returns cashOnHand
    protected:

    private:
        float cashOnHand;
};

#endif // CASHREGISTER_H
