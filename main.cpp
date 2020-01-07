#include <iostream>
#include "Animal.h"
#include "Vertebrate.h"
#include "Nevertebrate.h"
using namespace std;


int main()
{
    Vertebrate animalutz;
    cin>>animalutz;

    //cout<<animalutz;
    animalutz.afisare();

    cout<<endl;

    Nevertebrate bestie;
    cin>>bestie;
    bestie.afisare();

    return 0;
}
