#include <iostream>

using namespace std;

int main()
{
    const float pi = 3.1411592;
    float r;

    cin >> r;

    float volume = (4.0/3.0)*pi*(r*r*r);
    float surfaceArea = 4.0*pi*(r*r);

    cout << volume << "  " << surfaceArea << endl;
    return 0;
}
