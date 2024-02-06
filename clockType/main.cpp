#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
    clockType myClock(7, 24, 32);
    clockType yourClock;

    cout << "line 11: myClock = " << myClock << endl;

    cout << "Line 13: yourClock = " << yourClock << endl;

    cout << "Enter the time in the format: hr:min:sec ";
    cin >> myClock;
    cout << endl;

    cout << "The new time of myClock: " << myClock << endl;
    ++myClock;
    cout << myClock << endl;

    yourClock.setTime(13,25,38);

    cout << "After setting the time of your Clock: " << yourClock << endl;

    return 0;
}
