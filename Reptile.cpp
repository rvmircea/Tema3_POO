#include "Reptile.h"

Reptile::Reptile()
{
    temperaturaCorp = 0;
}

Reptile::~Reptile()
{

}

istream& operator >>(istream &in, Reptile& Reptila)
{
    cout<<"Introduceti numele, varsta animalului:";
    cout<<"\n Nume: ";
    in>>Reptila.nume;
    cout<<"\n Varsta: ";
    in>>Reptila.varsta;
    cout<<"\n Temperatura medie ";
    in>>Reptila.temperaturaCorp;

    return in;
}

void Reptile::afisare()
{
    cout<<"\nSunt o reptila ";
}
