#include <iostream>

using namespace std;


int reverseNum(int n)
{
    // given a number base 10
    // returns the number in reverse order; eg: reverseNum(123) = 321
    int reverseN=0, remainder;

    cout << n << " reversed = " ;
    while (n != 0)
        {
            remainder = n % 10;
            n = n/10;
            reverseN = (reverseN*10) + remainder;
        }
    return reverseN;
}

int main()
{

    cout << reverseNum(69925) << endl;


    return 0;
}
