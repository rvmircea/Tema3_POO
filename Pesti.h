#ifndef PESTI_H
#define PESTI_H

#include "Vertebrate.h"

using namespace std;

class Pesti:public Vertebrate
{
private:
    string culoareSolzi;
public:

    Pesti();
    //apel explicit constructor parametrizat din baza Vertebrate
    Pesti(int nrO):Vertebrate(nrO)
    {
        numarOchi=nrO;
    }

    Pesti(const Pesti& Peste): Vertebrate(Peste)
    {
        numarOchi = Peste.numarOchi;
    }

    ~Pesti();

    void operator =(const Pesti&);

    friend istream& operator >>(istream &in, Pesti&);
    void afisare();

};

#endif // PESTI_H
