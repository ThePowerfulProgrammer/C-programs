#include <iostream>

using namespace std;
// Derived class objects can pass as a parameter for based class reference params


// base class
class petType
{
    public:
        // adding keyword virtual -> allows for binding at program execution time not compile time :)
        virtual void print() const;
        virtual void funFact() const;
        petType petTypeCopy() ;
        petType(string n = "");
    private:
        string name;
};

petType::petType(string n)
{
    name = n;
}

void petType::print() const
{
    cout << "Name: " << name ;
}

void petType::funFact() const
{
    cout << "Yeet " ;
}

petType petType::petTypeCopy()
{
    return *this;
}

// derived class
class dogType: public petType
{
    public:
        void print() const;
        void funFact() const;
        dogType(string n = "", string b="");
    private:
        string breed;
};

dogType::dogType(string n, string b) : petType(n)
{
    breed = b;
}

void dogType::print() const {
    petType::print();
    cout << " Breed: " << breed << endl;
}

void dogType::funFact() const
{
    petType::funFact();
    cout << " Dip" << endl;
}

// Cool function below
void callPrint(petType & p)
{
    p.print();
}


void callFunFact(petType *p)
{
    p->funFact();
}

int main()
{
     petType pet("Azura");
     dogType dog("Uri", "Swiss Shepherd");
     pet.print();
     cout << endl;
     dog.print();
     cout << "*** Calling the function callPrint ***"
     << endl;
     callPrint(pet);
     cout << endl;
     callPrint(dog);

     // ---------------------------------------------
     cout <<"\n \n \n";
     cout << "the previous also applies when a function uses a pointer to a class as a param" << endl;

     petType *p;
     dogType *d;

     p = new petType("Milo");
     d = new dogType("Coco", "Pitbull");

     callFunFact(p);
     callFunFact(d);

     cout << "Using pointer this" << endl;
     petType pet1;
     pet1 = pet.petTypeCopy();
     callPrint(pet1);

    return 0;
}
