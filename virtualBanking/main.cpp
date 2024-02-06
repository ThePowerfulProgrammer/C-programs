#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include "checkingAccount.h"
using namespace std;

int main()
{
    cout <<  fixed << setprecision(3);

    auto t = time(nullptr); // create time objects
    auto tm = *localtime(&t);   // get current date

    ostringstream oss;  // object instance of ostringstream
    oss << put_time(&tm, "%d-%m-%Y %H-%M-%S"); // format output

    auto str = oss.str(); // create string obj
    string startMonth = str;

    cout << str << endl;

    return 0;
}

/*
    Needs alot ot work
    only contains skeleton code
*/
