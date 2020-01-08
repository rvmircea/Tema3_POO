#ifndef ATLAS_H
#define ATLAS_H

#include <iostream>
#include <list>
#include "Animal.h"
#include "Pesti.h"
#include "typeinfo";

using namespace std;

template <typename T>
class AtlasZoologic
{
private:
    static int numarAnimale;
    list<Animal*> listaAntimale;
    T coperta;
public:
    AtlasZoologic();
    ~AtlasZoologic();

    void Coperta(T);

};

template<typename T>int AtlasZoologic<T>::numarAnimale;

template<typename T>
AtlasZoologic<T>::AtlasZoologic()
{
    numarAnimale = 0;
    cout<<"Momentan atlasul nu contine animale\n";
}

template<typename T>
AtlasZoologic<T>::~AtlasZoologic()
{

}

template<typename T>
void AtlasZoologic<T>::Coperta(T a)
{
    cout<<"\nAtlasul are pe coperta "<<typeid(T).name() <<endl;
}


#endif // ATLAS_H

