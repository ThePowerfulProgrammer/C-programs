#include <iostream>
#include <string>

using namespace std;

int main()
{
    // & address of operator
    // * derefrencing operator

    int x = 5;
    int *ptrx;

    cout << "Memory position occupied by x: " << &x << endl;
    cout << "Value stored in x: " << x << endl << endl ;

    cout << "Assign pointer to hold memory position of x" << endl;
    ptrx = &x;
    cout << "Memory position occupied by ptrx: " << &ptrx << endl;
    cout << "Value stored in ptrx: " << ptrx << " same as memory position occupied by x" << endl << endl;

    cout << "Pointers store memory positions, the value occupied at the memory location can be maipulated by the pointer " << endl;
    *ptrx = 10;

    cout << "Memory position occupied by x: " << &x << endl;
    cout << "Value stored in x: " << x << endl << endl ;


    cout << "c++ does not initilise vars therefore we have to do it ourselves for pointers there is a special init \n"
            "nullptr that can be typecast to all other types, \t nullptr is also import for dynamic memory allocation \n" << endl << endl;

    cout << "Dynamic memory manipulation " << endl;

    int *p;
    char *name;
    string *str;

    p = new int;

    *p = 28;

    name = new char[5];

    str = new string;

    *str = "Sunny day";

    delete p;
    delete [] name;
    delete str;


    return 0;
}
