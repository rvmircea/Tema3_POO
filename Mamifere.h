#ifndef MAMIFERE_H
#define MAMIFERE_H

#include "Vertebrate.h"

using namespace std;

class Mamifere: public Vertebrate
{
private:
    float lungimePar;
public:
    Mamifere();

    Mamifere(int nrO):Vertebrate(nrO)
    {
        numarOchi = nrO;
    }

    Mamifere(const Mamifere& Mamifer): Vertebrate(Mamifer)
    {
        numarOchi = Mamifer.numarOchi;
    }

    ~Mamifere();

     friend istream& operator >>(istream &in, Mamifere&);
    void afisare();
};

#endif // MAMIFERE_H
