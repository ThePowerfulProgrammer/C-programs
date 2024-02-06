#include <iostream>

using namespace std;

int main()
{
    // regular array with pointer
    int list[5];
    for (int i = 0; i<5; i++)
        {
            list[i] = i*i;
        }
    int *listPtr = list;

    cout << listPtr << endl;

    // dynamic array
    int arraySize;
    int *myDynamicArray;

    cout << "Enter array size: " ;
    cin >> arraySize;

    myDynamicArray = new int[arraySize];

    for (int i = 0; i<arraySize; i++)
        {
            myDynamicArray[i] = i*i;
        }

    cout << myDynamicArray << endl;

    for (int i = 0; i<arraySize; i++)
        {
            cout << myDynamicArray[i] << endl;
        }

    delete [] myDynamicArray;
    myDynamicArray = nullptr;

    return 0;
}
