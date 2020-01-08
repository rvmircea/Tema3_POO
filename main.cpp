#include <iostream>
#include "Animal.h"
#include "Vertebrate.h"
#include "Nevertebrate.h"
#include "Pesti.h"
#include "Pasari.h"
#include "Mamifere.h"


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

    list<Animal*> l;
    list<Animal*>::iterator it;

    l.push_back(&V);
    l.push_back(&N);
    l.push_back(&P);

    cout<<typeid(V).name()<<endl;
    for(it = l.begin(); it != l.end(); it++)
    {

            if(dynamic_cast<Vertebrate*> (*it) != 0)
               {
                  cout<<"\nSunt vertebrat ";
                  if (dynamic_cast<Pesti*>(*it) != 0 )
                    cout<<"\nSunt peste";
               }
               // cout <<"sunt vertebrat "<<endl;
        /*if (dynamic_cast<Vertebrate*>(it) ) != 0 )
            {


            }
            //cout<<type_index( typeid( l[i] ) ) <<endl;

            */
    }



    return 0;
}
