#include "Nevertebrate.h"

Nevertebrate::Nevertebrate()
{
    greutate = 0.0f;
}
Nevertebrate::~Nevertebrate()
{

}

istream& operator >>(istream &in, Nevertebrate& Nv)
{
    cout<<"Introduceti numele, varsta animalului:";
    cout<<"\n Nume: ";
    in>>Nv.nume;
    cout<<"\n Varsta: ";

    try{

    in>>Nv.varsta;
    if(Nv.varsta != int(Nv.varsta) )
        {
            throw Nv.varsta;
        }

        }
        catch(float e)
            {
                cout<<"\n Trebuie sa fie numar intreg !";
            }


    cout<<"\n Greutate ";
    in>>Nv.greutate;

    return in;
}

void Nevertebrate::operator=(const Nevertebrate &N)
{
    greutate=N.greutate;
}

void Nevertebrate::afisare()
{
    cout<<"\nSunt un "<<nume<<" fara oase si cantaresc "<<greutate<<" si am "<<varsta<<" anisori\n";

}

