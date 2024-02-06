#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H
#include <iostream>

using namespace std;

class clockType
{
    friend ostream& operator<<(ostream&, const clockType&);
    friend istream& operator>>(istream&, clockType&);
    public:
        clockType(int hours = 0, int minutes = 0, int seconds = 0);
        void setTime(int hours, int minutes, int seconds);
        void getTime(int& hours, int &minutes, int & seconds) const;
        clockType operator++();
        bool operator==(const clockType& otherClock) const;
        bool operator!=(const clockType& otherClock) const;
        bool operator<=(const clockType& otherClock) const;
        bool operator<(const clockType& otherClock)  const;
        bool operator>=(const clockType& otherClock)  const;
        bool operator>(const clockType& otherClock)  const;

        ~clockType();

    protected:

    private:
        int hr;
        int min;
        int sec;
};

#endif // CLOCKTYPE_H
