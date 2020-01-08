#ifndef PESTI_H
#define PESTI_H

#include "Vertebrate.h"

using namespace std;

class Pesti:public Vertebrate
{
private:
    string culoareSolzi;
    float lungime;
    string tip;
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

    string g_tip();
    float g_lungime();

};

#endif // PESTI_H
