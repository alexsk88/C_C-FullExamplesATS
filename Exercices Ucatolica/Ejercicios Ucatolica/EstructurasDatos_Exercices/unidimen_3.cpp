// ESCRIBIR UN PROGRAMA QUE LLENE UN ARREGLO CON CINCO NÚMEROS ENTEROS
// CONSECUTIVOS Y HAGA UNA COPIA DE ESE ARREGLO EN OTRO.

#include <iostream>
using namespace std;

int main()
{
    int arreglo[6],arreglo2[6],k;
    int cont = 0;

   cout<<"\n\nArreglo 1 \n";
    cout<<"=============== \n";
    for (int i = 1; i < 6; i++)
    {
        arreglo[i] = i;
        cout<<"arreglo1["<<i<<"] = "<<arreglo[i]<<"\n"; 
    }
    
    cout<<"\n\nCopia de Arreglo 1 \n";
     cout<<"=============== \n";
    for (int i = 1; i < 6; i++)
    {
        arreglo2[i] = arreglo[i];
        cout<<"arreglo2["<<i<<"] = "<<arreglo2[i]<<"\n"; 
    }

    cout<<"\n\nEND PROGRAM";
    cin >> k;
    return 0;
}