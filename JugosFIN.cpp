#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    system("color 0c");
    int total,n,l,nl,cj,e=30,tp,acum=0;
   char c;
do{
    cout<< "INGRESE CANTIDAD DE JUGOS: " ;
    cin>> cj;
    cout<< endl;
    cout<< "INGRESE CODIGO DEL JUGO: " ;
    cin>> c ;
    cout<< endl;
cout<< "CUANDO QUIERA CERRAR EL PROGRAMA PRESIONE 0" << endl;
    switch (c)
    {
    case 'n':
        if (cj<12)
        {
           acum+= (250*cj);
        }
        else
        {
            acum+= (230*cj);
        }
        break;
    case 'l':
        if (cj<12)
        {
          acum+= (290*cj);
        }
        else
        {
            acum+= (250*cj);
        }
        break;
    }
}
while (cj!=0);
    total=acum+e;
    cout<< "LA CANTIDAD A PAGAR ES: $" <<  total << endl;
    return 0;
}
