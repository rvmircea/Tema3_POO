#ifndef VERTEBRATE_H
#define VERTEBRATE_H

#include "Animal.h"

using namespace std;

class Vertebrate:public Animal
{
protected:
    int numarOchi;

public:
    Vertebrate();

    Vertebrate(int);


    //apel explicit constructor parametrizat din baza Animal
    Vertebrate(string nm, int vrst): Animal(nm,vrst)
    {
        nume=nm;
        varsta=vrst;
    }
    //apel explicit construcotr copiere din baza Animal
    Vertebrate(const Vertebrate& x):Animal(x)
    {
        nume=x.nume;
        varsta=x.varsta;
    }

    ~Vertebrate();

    friend istream& operator >>(istream &in, Vertebrate&);
    void afisare();

};


#endif // VERTEBRATE_H

