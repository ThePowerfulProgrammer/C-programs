#include <iostream>

using namespace std;

class romanType
{
    public:
        romanType(string romanNumeral);
        void print(string & answer);
    private:
        string romanNumeral;
        int romanInteger = 0;
};

romanType::romanType(string romanNumeral)
{
    int sum = 0;

    for (int i=0 ;i< romanNumeral.length(); i++)
    {
        switch (romanNumeral[i])
        {
            case 'M':
                sum += 1000;
                break;
            case 'D':
                sum += 500;
                break;
            case 'C':
                sum += 100;
                break;
            case 'L':
                sum += 50;
                break;
            case 'X':
                sum += 10;
                break;
            case 'V':
                if (romanNumeral[i+1] == 'I')
                    {
                        sum += 6;
                    }
                else
                    {
                        sum += 5;
                    }
                i +=1;
                break;
            case 'I':
                if (romanNumeral[i+1] == 'V')
                    {
                        sum += 4;
                    }
                else
                    {
                        sum += 1;
                    }
                i +=1;
                break;
        }
    }
    romanInteger = sum;
}

void romanType::print(string & answer)
{
    if (answer == "romanNumeral")
        {
            cout << romanNumeral << endl;
        }
    else
        {
            cout << romanInteger << endl;
        }
}

int main()
{
    romanType romanNum1("MCXIV");

    string answer;
    cin >> answer;
    romanNum1.print(answer);

    return 0;
}
