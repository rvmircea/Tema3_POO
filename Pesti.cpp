#include "Pesti.h"

Pesti::Pesti()
{
    culoareSolzi = "gri";
}

Pesti::~Pesti()
{

}

istream& operator >>(istream &in, Pesti& Peste)
{
    cout<<"Introduceti numele, varsta animalului:";
    cout<<"\n Nume: ";
    in>>Peste.nume;
    cout<<"\n Varsta: ";
    in>>Peste.varsta;
    cout<<"\n Culoare Solzi ";
    in>>Peste.culoareSolzi;

    return in;
}

void Pesti::afisare()
{
    cout<<"\nSunt un peste de culoare "<<culoareSolzi<<endl;
}
