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

    list<Animal*> listaAntimale;
    T coperta;
public:
    static int numarAnimale;
    AtlasZoologic();
    ~AtlasZoologic();

    void Coperta(T);

    void info();
    void operator +=(T &);

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

template<typename T>
void AtlasZoologic<T>::operator +=(T &t)
{
    listaAntimale.push_back(&t);
    numarAnimale++;
}

template<typename T>
void AtlasZoologic<T>::info()
{
    list<Animal*>::iterator it;

    for(it = listaAntimale.begin(); it!=listaAntimale.end(); it++)
    {
        (*it)->afisare();
    }

}

/*template<>
void AtlasZoologic<Pesti>::info()
{
    list<Animal*>::iterator it;
    for(it = listaAntimale.begin(); it != listaAntimale.end(); it++)
    {
        if (dynamic_cast<Pesti*>(*it) != 0 )
            //if( (*it)->g_tip == "rapitor" && (*it)->g_lungime >= 1)
                cout<<"Test";
    }



}
*/

#endif // ATLAS_H

