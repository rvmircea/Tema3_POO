#ifndef NEVERTEBRATE_H
#define NEVERTEBRATE_H

#include "Animal.h"

using namespace std;

class Nevertebrate:public Animal
{
private:
    float greutate;

public:
    Nevertebrate();

    //apel explicit constructor parametrizat din baza Animal
    Nevertebrate(string nm, int vrst): Animal(nm,vrst)
    {
        nume=nm;
        varsta=vrst;
    }
    //apel explicit construcotr copiere din baza Animal
    Nevertebrate(const Nevertebrate& x):Animal(x)
    {
        nume=x.nume;
        varsta=x.varsta;
    }

    ~Nevertebrate();

    friend istream& operator >>(istream &in, Nevertebrate&);
    void afisare();

};


#endif // NEVERTEBRATE_H
