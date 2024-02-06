#include "Exercise.h"
#include <string>
#include <iostream>
using namespace std;

// ctor's

Exercise::Exercise()
{
    name = "";
    sets = 0;
    reps = 0;
    rest = "";
    intensity = 0.0;
    Max = 0.0;
    RPE = 0;
}

Exercise::Exercise(string n, int s, int r, string rest, float i, int rpe, float m)
{
    // params ctor
    name = n;
    sets = s;
    reps = r;
    rest = rest;
    intensity = i;
    Max = m;
    RPE = rpe;
}

// Increment functions
void Exercise::incrementSets(int s)
{
    sets += s;
}

void Exercise::incrementReps(int r)
{
    reps += r;
}

void Exercise::incrementRPE(int rpe)
{
    if (RPE > 10) { RPE = rpe; }

    switch (RPE)
    {
    case 10:
        cout << "RPE 10 " << endl;
        break;
    case (7,8,9):
        RPE += rpe;
        break;
    case (4,5,6):
        rpe +=1;
        RPE += rpe;
        break;
    case (1,2,3):
        rpe +=1;
        RPE += rpe;
        break;
    case 0:
        RPE = rpe;
        break;
    }

}

void Exercise::incrementMax(float m)
{
    Max += m;
}

void Exercise::incrementIntensity(float i)
{

    if (intensity > 1)
        {
            intensity = 1;
        }
    if (intensity < 1 && intensity > 0)
        {
            intensity += i;
            if (intensity > 1)
                {
                    intensity = 1;
                }
        }
    if (intensity < 0)
        {
            intensity += i;
        }
}



// getters

int Exercise::getSets()
{
    return sets;
}

int Exercise::getReps()
{
    return reps;
}

int Exercise::getRPE()
{
    return RPE;
}


float Exercise::getIntensity()
{
    return intensity;
}

float Exercise::getMax()
{
    return Max;
}

string Exercise::getName()
{
    return name;
}


// setters
void Exercise::setSets(int s)
{
    sets = s;
}

void Exercise::setReps(int r)
{
    reps = r;
}

void Exercise::setRPE(int rpe)
{
    RPE = rpe;
}

void Exercise::setIntensity(float i)
{
    intensity = i;
}


void Exercise::setMax(float m)
{
    Max = m;
}

void Exercise::setName(string n)
{
    name = n;
}

// Helping functions

float Exercise::getWorkingWeight()
{
    return (intensity * Max);
}


bool Exercise::adjustSetVolume(int soreness, int performance)
{
    if (soreness == 3 || performance == 3)
        {
            cout  << "Employ recovery sessions" << endl << endl;
            return false;
        }
    if (performance == 2 || soreness == 2)
        {
            cout << "Do not add sets" << endl << endl;
            return false;
        }
    if (performance == 1)
        {
            if (soreness ==  1)
                {
                    cout << "Add 0-1 set" << endl << endl;
                    sets +=1;
                    return true;
                }
            else if (soreness == 0)
                {
                    cout << "Add  0-2 sets" << endl;
                    sets += 2;
                    return true;
                }
        }

    if (performance == 0)
        {
            if (soreness ==  1)
                {
                    cout << "Add 1-2 sets" << endl << endl;
                    sets +=2;
                    return true;
                }
            else if (soreness == 0)
                {
                    cout << "Add 1-3 sets" << endl << endl;
                    sets += 3;
                    return true;
                }
        }
}

void Exercise::addWeight_Reps(string type, float base)
{
    if (type == "RMLP")
        {
            intensity += base;
            if (RPE < 10)
                {
                    RPE +=1;
                }
            else
                {
                    RPE = 7;
                }
        }
    else if (type == "RBRP")
        {
            reps += 1;
            if (RPE < 10)
                {
                    RPE +=1;
                }
            else
                {
                    RPE = 7;
                }
        }
    else
        {
            exit(0);
        }

        /*cout << "Name" << "\t\t" << "SetsxReps@RPE" << "\t" << "Weight" << "\n"
        << name << "\t" << sets << "x" << reps << "@" << RPE << "\t\t" << (intensity*Max) << "kg's" << endl;;*/
}



// overloading funcs


// dtor
Exercise::~Exercise()
{
    //dtor

}
