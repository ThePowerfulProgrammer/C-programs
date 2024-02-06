#include <iostream>

using namespace std;

// pointerstuff
void hideDetails()
{
    int x;
    int *xptr;

    x = 28;

    cout << x << endl;
    xptr = NULL;
    cout << xptr << endl;

    xptr = &x;

    cout << &x << endl;
    cout << xptr << endl;

    *xptr = 30;

    cout << x << endl;

    int *p;
    char *name;
    string *str;

    p = new int;

    cout << p << endl;
    *p = 28;
    cout << p << endl;
    cout << *p << endl;

    name = new char[5];

    str = new string;

    *str = "Sunny day";

    delete p;
    delete [] name;
    delete str;

    p = NULL;
    name = NULL;
    str = NULL;

}

int main()
{

    int a,b;
    a = 5;
    b = 10;

    int *temp;
    temp = &a;

    *temp = b;

    cout << a << b << endl;


    return 0;
}
