#include <iostream>
#include "linkedListIterator.h"

using namespace std;



template <class Type>
nodeType<Type>* buildListForward()
{
    // building a linked list forward --> new objects are always added at the end
    /*
    We need three pointers to build the list: one to point to the first node in the list, which
    cannot be moved; one to point to the last node in the list; and one to create the new
    node
    */
    nodeType<Type> *first, *last, *newNode;
    int num;

    cout << "Enter a list of integers ,one at a time and ending with -999" << endl;
    cin >> num;

    while (num != -999)
        {
            newNode = new nodeType<Type>;
            newNode->info = num;
            newNode->link = nullptr;

            if (first == nullptr)
                {
                    first = newNode;
                    last  = newNode;
                    // there exists only one object and therfore first == last
                }
            else
                {
                    last->link = newNode;
                    last = newNode;
                }
        }
    return first;

} // returns pointer to first object of list

int main()
{


    return 0;
}


