#ifndef REPTILE_H
#define REPTILE_H

#include "Vertebrate.h"

using namespace std;

class Reptile: public Vertebrate
{
private:
    float temperaturaCorp;
public:
    Reptile();

    Reptile(int nrO):Vertebrate(nrO)
    {
        numarOchi = nrO;
    }

     Reptile(const Reptile& Reptila): Vertebrate(Reptila)
    {
        numarOchi = Reptila.numarOchi;
    }

    ~Reptile();

    friend istream& operator >>(istream &in, Reptile&);
    void afisare();
};

#endif // REPTILE_H
