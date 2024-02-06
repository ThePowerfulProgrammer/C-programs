#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <string>

using namespace std;

class Exercise
{
    public:
        // base ctor sets all to default
        Exercise();
        // ctor with params sets data for exercise
        Exercise(string n, int s, int r, string rest, float i, int rpe, float m);

        // getters
        int getSets();
        int getReps();
        int getRPE();
        float getIntensity();
        float getMax();
        string getName();

        // setters
        void setSets(int s);
        void setReps(int r);
        void setRPE(int rpe);
        void setIntensity(float i);
        void setMax(float m);
        void setName(string n);

        // Potentiate

        void incrementSets(int s);
        void incrementReps(int r);
        void incrementRPE(int rpe);
        void incrementIntensity(float i);
        void incrementMax(float m);
        void incrementRest(string rest);

        // helping functions
        float getWorkingWeight();

        // function to adjust set volume
        bool adjustSetVolume(int soreness=0, int performance=0);

        // function to add weight/reps
        void addWeight_Reps(string type="RMLP", float base=0.025);



        // Overload operators --> {<< , >>, }
        friend ostream& operator <<(ostream& outstream, const Exercise& ex)
        {
            /*
            outstream << "Name" << "\t\t" << "SetsxReps@RPE" << "\t" << "Weight" << "\n"
            << ex.name << "\t" << ex.sets << "x" << ex.reps << "@" << ex.RPE << "\t\t" << (ex.intensity*ex.Max) << "kg's" << endl;*/
            outstream << ex.name << "\t" << ex.sets << "x" << ex.reps << "@" << ex.RPE << "\t\t" << (ex.intensity*ex.Max) << "kg's" << endl;
            return outstream;
        }

        // dtor
        ~Exercise();

    protected:

    private:
        string name;
        float Max;
        int sets;
        int reps;
        string rest;
        float intensity;
        int RPE;

};














#endif // EXERCISE_H
