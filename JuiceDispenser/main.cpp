#include <iostream>
#include "cashRegister.h"
#include "dispenser.h"

using namespace std;

int main()
{
    cashRegister register1(200);
    dispenser orange(10, 10.0);
    dispenser apple(25, 12.50);
    dispenser mango(5, 8.25);
    dispenser strawberryBanana(10, 15.50);

    dispenser juices[4] = {orange, apple, mango, strawberryBanana};
    string juice[4] = {"orange", "apple", "mango", "strawberryBanana"};
    char answer;
    int purchase;

    std::cout << "Are you browing our juice selection? " << endl;
    std::cin >> answer;
    if (answer == 'y')
        {
            std::cout << "Below is our selection of juices: " << endl;
            for (int i = 0; i<4; i++)
                {
                    std::cout <<  juice[i] << " "<< " R" << juices[i].getCost() << endl;
                }
            std::cout << "What juice would you like? \n" <<
                      " press 1 for orange \n 2 for apple \n 3 for mango \n 4 for strawberryBanana" << endl;
            std::cin >> purchase ;

            float price = juices[purchase-1].getCost();
            juices[purchase-1].confirmCash(price);
            cout << juices[purchase-1].getNumberOfItems() << endl;
            register1.Sale(price);
            cout << endl;
            cout << register1.getCurrentBalance() ;
        }

    return 0;
}
