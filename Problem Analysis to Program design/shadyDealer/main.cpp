#include <iostream>

using namespace std;

/*
    The dealers cost of a car is 85% of the lsited price. The dealer would accept any offer that is at least R500 over the dealers cost
    Design an algorithm that prompts the user to input the list price of the car and print the least amount the dealer would accept
    for the car
*/

int main()
{
    float dealersCost = 0.85;
    float listedPrice;

    cout << "Enter the listed price: ";
    cin >> listedPrice ;
    cout << endl;

    cout << "Minimum cost that the dealer will accept is R" <<  (dealersCost * listedPrice) + 500 << endl;
    return 0;
}
