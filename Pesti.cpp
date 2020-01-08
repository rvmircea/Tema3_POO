#include "Pesti.h"

Pesti::Pesti()
{
    culoareSolzi = "gri";
    lungime = 0.0f;
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
    cout<<"\n Lungime ";
    in>>Peste.lungime;
    cout<<"\n Tip ";
    in>>Peste.tip;

    return in;
}

void Pesti::operator=(const Pesti &Peste)
{
    culoareSolzi=Peste.culoareSolzi;
}

string Pesti::g_tip()
{
    return tip;
}

float Pesti::g_lungime()
{
    return lungime;
}


void Pesti::afisare()
{
    cout<<"\n Sunt un peste de culoare "<<culoareSolzi<<" de lungime "<<lungime<<" si de tip "<<tip;
}
