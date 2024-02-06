#include <iostream>

using namespace std;

class person
{
    public:
        person();
        // ctor
        void setName(string n);
        // sets name
        void print();
        // prints name
    private:
        string name;
};

person::person()
{
    name = "";
}

void person::setName(string s)
{
    name = s;
}

void person::print()
{
    cout << name ;
}

int main()
{
    person personExample;
    person *personPtr;

    personPtr = &personExample;

    (*personPtr).setName("Ash");

    personExample.print();

    cout << endl;

    personPtr->setName("Azura");
    personPtr->print();
    personExample.print();

    return 0;
}
