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
    try{

    in>>V.varsta;
    if(V.varsta != int(V.varsta) )
        {
            throw V.varsta;
        }

        }
        catch(float e)
            {
                cout<<"\n Trebuie sa fie numar intreg !";
            }

    cout<<"\n Numar ochi ";
    in>>V.numarOchi;

    return in;
}

void Vertebrate::operator=(const Vertebrate &V)
{
    numarOchi=V.numarOchi;
}

void Vertebrate::afisare()
{
    cout<<"\nSunt un "<<nume<<" cu oase si cu "<<numarOchi<<" ochi si am "<<varsta<<" anisori\n";

}
