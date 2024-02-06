#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>
using namespace std;

string passwordGenerator(string fullName) {
    // Seed the random number generator with the current time
    srand(time(NULL));

    string password = "";
    int name_length = fullName.length();

    // Choose 5 random non-space characters from the full name
    for (int i = 0; i < 5; i++) {
        int random_index;
        char random_char;

        do {
            random_index = rand() % name_length; // Generate a random index within the range of name_length
            random_char = fullName[random_index]; // Get the character at the random index
        } while (random_char == ' '); // Repeat if the character is a space

        password += random_char; // Append the character to the password string
    }

    return password;
}

// Ashish Ramnath
int findLastSpace(string fullName)
{
    int spacePos;
    int location = 0;

    while (location != -1)
        {
            location = fullName.find(' ', location+1);
            if (location != -1)
                {
                    spacePos = location; // location of last " " therefore all after is surname and all before is firstName
                }
        }
    return spacePos;
}



string generateUsername(string & name, string & surname)
{
    string username = "";
    if ((surname.size() >= 4) && (surname.size() + name.size() >= 5))
        {
            username += surname.substr(0,4);
            username += name.substr(0,1);
        }
    else if ((surname.size() < 4) && (surname.size() + name.size() >=5 ))
        {
            username += surname.substr(0) + name.substr(0,5-surname.size());
        }
    else if (surname.size() + name.size() < 5)
        {
            username += surname.substr(0) + name.substr(0);
            for (int i=0;i<5-(surname.size()+name.size()); i++)
                {
                    username += '0';
                }
        }
    return username;
}

int main()
{

    string password;
    string fullName = "Ashish Rb";
    int lastSpacePos;
    string surname;
    string name;
    string username;

    //cout << "Enter fullName: ";
    //getline(cin, fullName, '\n');

    password = passwordGenerator(fullName);

    lastSpacePos = findLastSpace(fullName);

    surname = fullName.substr(lastSpacePos+1);
    name = fullName.substr(0, lastSpacePos);
    transform(name.begin(), name.end(), name.begin(), [](unsigned char c){return tolower(c); });
    username = generateUsername(name, surname);

    cout << "Password: "<< password << endl ;
    cout << "Username: "<<username << endl;
    return 0;
}





/*ChatGpt-solution to by bugged code

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generatePassword(std::string fullName) {
    int r;
    std::string password = "";
    srand(time(0));
    for (int i=0; i<5;i++) {
        r = rand() % fullName.size();

        while (fullName[r] == ' ') {
            r = rand() % fullName.size();
        }

        password += fullName[r];
    }
    return password;
}

*/
