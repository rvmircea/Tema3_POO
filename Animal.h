#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal{
protected:
    string nume;
    int varsta;
public:
    Animal();
    Animal(string,int);
    Animal(const Animal&);
    ~Animal();

    friend istream& operator >>(istream &in, Animal&);
    friend ostream& operator <<(ostream &, Animal&);
    void operator =(const Animal&);
   // virtual void afisare()=0;


};


/*
Animal::Animal()
{
    varsta = 0;
}

Animal::Animal(string nm,int vrst)
{
    nume = nm;
    varsta = vrst;
}

Animal::~Animal()
{
}

*/

#endif
