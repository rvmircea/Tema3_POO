#include "Animal.h"

//Constructori

Animal::Animal()
{
    varsta = 0;
}

Animal::Animal(string nm,int vrst)
{
    nume = nm;
    varsta = vrst;
}

Animal::Animal(const Animal &x)
{
    nume = x.nume;
    varsta = x.varsta;
}

//Destructori
Animal::~Animal()
{

}
//supraincarcarea operatorilor >> =

istream& operator >>(istream &in, Animal& A)
{
    cout<<"Introduceti numele, varsta animalului:";
    cout<<"\n Nume: ";
    in>>A.nume;
    cout<<"\n Varsta: ";
    in>>A.varsta;

    return in;
}

/*ostream& operator <<(ostream &out, Animal& A)
{
    cout<<"\nSunt un "<<A.nume<<" si am "<<A.varsta<<" anisori";

    return out;
}*/

void Animal::operator=(const Animal&x)
{
    nume=x.nume;
    varsta=x.varsta;
}
