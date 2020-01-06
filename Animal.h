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
    ~Animal();

    friend istream operator >>(istream &in, Animal&A);

};

istream operator >>(istream &in, Animal&A)
{
    cout<<"Introduceti numele, varsta animalului: ";
    in>>A.nume>>A.varsta;
}

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

#endif
