#include <iostream>
#include "Animal.h"
#include "Vertebrate.h"
#include "Nevertebrate.h"
#include "Pesti.h"
#include "Pasari.h"


#include <bits/stdc++.h>
using namespace std;


int main()
{
   /* Vertebrate animalutz;
    cin>>animalutz;

    //cout<<animalutz;
    animalutz.afisare();

    cout<<endl;

    Nevertebrate bestie;
    cin>>bestie;
    bestie.afisare();*/

 /*Animal *A;

    Vertebrate v;
    Nevertebrate n;

    list<Animal*> l;


    l.push_back(&v);
    l.push_back(&n);

*/

    Vertebrate V;
    Nevertebrate N;
    Pesti P;

    vector<Animal*> l;

    l.push_back(&V);
    l.push_back(&N);
    l.push_back(&P);

    cout<<typeid(V).name()<<endl;
    for(int i = 0;i<l.size();i++ )
    {
        if (dynamic_cast<Vertebrate*>(l[i]) != 0 )
            {
            cout<<"\nSunt vertebrat "<<i;
                if (dynamic_cast<Pesti*>(l[i]) != 0 )
                    cout<<"\nSunt peste";
            }
            //cout<<type_index( typeid( l[i] ) ) <<endl;
    }



    return 0;
}
