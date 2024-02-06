#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rdevice{};
    default_random_engine num{ rdevice() };
    uniform_int_distribution<unsigned int> randomNum{1, 6};

    for (unsigned int count = 0; count <= 10; count++)
        {
            cout << randomNum(num) << " " ;
        }
    cout << endl;
    return 0;
}
