#ifndef DISPENSER_H
#define DISPENSER_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class dispenser
{
    public:
        dispenser(int nOI, float c);
        // ctor sets numberOfItems and cost of Juice
        int getNumberOfItems() const;
        // returns numerOfItems
        // const therefore calling object cannot have it's variables manipulated
        float getCost() const;
        // returns cost
        bool confirmCash(float cash);
        // checks if person has enough cash for purchase
        // reduces numberOfItems by 1

        friend ostream& operator <<(ostream& outstream, const dispenser& d)
        {
            /*
            outstream << "Name" << "\t\t" << "SetsxReps@RPE" << "\t" << "Weight" << "\n"
            << ex.name << "\t" << ex.sets << "x" << ex.reps << "@" << ex.RPE << "\t\t" << (ex.intensity*ex.Max) << "kg's" << endl;*/
            outstream << d.numberOfItems << endl;
            return outstream;
        }
        ~dispenser();


    protected:

    private:
        int numberOfItems;
        float cost;
};

#endif // DISPENSER_H
