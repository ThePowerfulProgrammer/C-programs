#include <iostream>
#include <iomanip>
#include "rectangleType.h"
#include "boxType.h"

using namespace std;

int main()
{
    rectangleType myRectangle(5.0, 3.0);
    boxType myBox(6,5,4.5);

    // flags
    cout << fixed << showpoint << setprecision(2);

    myRectangle.print();
    cout << endl;
    myBox.print();
    cout << endl;
    // call parent class method
    myBox.rectangleType::print();

    cout << endl;
    cout << myRectangle.area() << endl;
    cout << myBox.getHeight() << endl;

    cout << "y: "<< myRectangle.y << endl;

    rectangleType anotherRec(6.0, 2.0);

    cout << "y: "<< anotherRec.y << endl;

    return 0;
}
