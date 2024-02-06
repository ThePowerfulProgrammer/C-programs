#include <iostream>

using namespace std;

struct Person
{
    string name()
    {
        cout << "Hello world" << endl;
        return " Yeet";
    }

    int age;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
