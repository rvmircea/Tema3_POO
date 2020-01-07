#ifndef PASARI_H
#define PASARI_H

#include "Vertebrate.h"

using namespace std;

class Pasari:public Vertebrate
{
private:
    string culoareCioc;
public:
    Pasari();

     Pasari(int nrO):Vertebrate(nrO)
    {
        numarOchi=nrO;
    }

    Pasari(const Pasari& Pasare): Vertebrate(Pasare)
    {
        numarOchi = Pasare.numarOchi;
    }

    ~Pasari();

    friend istream& operator >>(istream &in, Pasari&);
    void afisare();

};

#endif // PASARI_H
