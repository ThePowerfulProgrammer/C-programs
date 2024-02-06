#include <iostream>

using namespace std;


class Marks{
    public:
        Marks();
        Marks(string name, string number, int asg1, int asg2, int asg3, double test);
        double calcMark() const;
    private:
        string stdtName;
        string stdNumber;
        int assignments[3];
        double testMark;
};

Marks::Marks()
{
    stdtName = "Ash";
    stdNumber = "11552859";
    assignments[0] = 30;
    assignments[1] = 30;
    assignments[2] = 30;
    testMark = 50;
}

Marks::Marks(string name, string number, int asg1, int asg2, int asg3, double test)
{
    stdtName = name;
    stdNumber = number;
    assignments[0] = asg1;
    assignments[1] = asg2;
    assignments[2] = asg3;
    testMark = test;
}

double Marks::calcMark() const
{
    return testMark;
}

class FinalMark: public Marks
{
    public:
        FinalMark();
        FinalMark(string name, string number, int asg1, int asg2, int asg3, double test, double exam);
        int calcMark();
        string getName();
        string getNumber();
    private:
        string stdtName;
        string stdNumber;
        int assignments[3];
        double testMark;
        double examMark;
};

string FinalMark::getName()
{
    return stdtName;
}

string FinalMark::getNumber()
{
    return stdNumber;
}

FinalMark::FinalMark() : Marks()
{
    stdtName = "Ash";
    stdNumber = "11552859";
    assignments[0] = 30;
    assignments[1] = 30;
    assignments[2] = 30;
    testMark = 50;
    examMark = 70;
}

FinalMark::FinalMark(string name, string number, int asg1, int asg2, int asg3, double test, double exam) : Marks(name,number,asg1,asg2,asg3,test)
{
    examMark = exam;
}

int FinalMark::calcMark()
{
    int assignmentWeight = ((assignments[0] + assignments[1] + assignments[2]) / 3) * 0.1;
    return int (assignmentWeight + (testMark *0.2) + (examMark * 0.7));
}


int main()
{
    Marks myMark1;
    Marks myMark2("Azu", "11552899",75,75,75,95);

    cout << myMark1.calcMark() << endl;
    cout << myMark2.calcMark() << endl;
    return 0;
}
