#include "Pasari.h"

Pasari::Pasari()
{
    culoareCioc = "Galben";
}

Pasari::~Pasari()
{

}

istream& operator >>(istream &in, Pasari& Pasare)
{
    cout<<"Introduceti numele, varsta animalului:";
    cout<<"\n Nume: ";
    in>>Pasare.nume;
    cout<<"\n Varsta: ";
    in>>Pasare.varsta;
    cout<<"\n Culoare cioc ";
    in>>Pasare.culoareCioc;

    return in;
}

void Pasari::operator=(const Pasari &Pasare)
{
    culoareCioc=Pasare.culoareCioc;
}

void Pasari::afisare()
{
    cout<<"\nSunt un pasari cu ciocul de culoare "<<culoareCioc<<endl;
}
