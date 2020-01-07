#include "Mamifere.h"

//constructori

Mamifere::Mamifere()
{
    lungimePar = 0;
}

Mamifere::~Mamifere()
{

}

istream& operator >>(istream &in, Mamifere& Mamifer)
{
    cout<<"Introduceti numele, varsta animalului:";
    cout<<"\n Nume: ";
    in>>Mamifer.nume;
    cout<<"\n Varsta: ";
    in>>Mamifer.varsta;
    cout<<"\n Lungime par ";
    in>>Mamifer.lungimePar;

    return in;
}

void Mamifere::afisare()
{
    cout<<"\nSunt un mamifer ";
}
