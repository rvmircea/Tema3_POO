#include "Vertebrate.h"

//constructor

Vertebrate::Vertebrate()
{
    numarOchi = 0;
}

Vertebrate::Vertebrate(int nrO)
{
    numarOchi = nrO;
}

Vertebrate::~Vertebrate()
{

}


istream& operator >>(istream &in, Vertebrate& V)
{
    cout<<"Introduceti numele, varsta animalului:";
    cout<<"\n Nume: ";
    in>>V.nume;
    cout<<"\n Varsta: ";
    in>>V.varsta;
    cout<<"\n Numar ochi ";
    in>>V.numarOchi;

    return in;
}


void Vertebrate::afisare()
{
    cout<<"\nSunt un "<<nume<<" cu oase si cu "<<numarOchi<<" ochi si am "<<varsta<<" anisori\n";

}
