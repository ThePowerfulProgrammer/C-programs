#include <iostream>
#include <fstream>
#include "Exercise.h"

using namespace std;

int main()
{

    string name;
    int s;
    int r;
    float Max;
    string rest;
    float intensity;
    int RPE;

/*
    Exercise my_workout[6];

    for (int i = 0; i<6;i++)
        {
            cout << "Enter exercise name: " ;
            cin >> name;
            cout << "Enter s,r,Max,intensity,RPE: " << endl;
            cin >> s >> r >> Max >> intensity >> RPE;
            cout << "Enter rest: ";
            cin >> rest;
            my_workout[i] = Exercise(name, s,r,rest,intensity,RPE, Max);
        }

    for (int i = 0; i<6 ; i++)
        {
            cout << my_workout[i] << endl;
        }
*/

    ifstream myFile("Block 1.txt");
    while (myFile >> name >> s >> r >> rest >> intensity >> RPE >> Max) {
        Exercise obj(name,s,r,rest,intensity,RPE,Max);
        cout << obj << endl;
    }
    myFile.close();

    // below works
    Exercise Upper1[5];
    Exercise Lower1[8];
    Exercise Upper2[6];
    Exercise Lower2[6];

    int count = 0;

    ifstream anotherFile("Block 1.txt");
    while (anotherFile >> name >> s >> r >> rest >> intensity >> RPE >> Max) {
        if (count<5)
            {
                Upper1[count] = Exercise(name,s,r,rest,intensity,RPE,Max);
            }
        count +=1;
    }
    anotherFile.close();
    cout << "************************" << endl;
    for (int i = 0; i<5; i++) {
        cout << Upper1[i] << endl;
    }



    return 0;
}
