//ESCRIBIR UN PROGRAMA QUE LLENE UN ARREGLO CON LOS NÚMEROS 
//COMPRENDIDOS ENTRE 0 Y 100 DIVISIBLES POR 10.

#include <iostream>
using namespace std;

int main()
{
    int arreglo[100],k;
    int cont = 0;

    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 0)
        {
            arreglo[cont] = i; 
            cout<<"arreglo["<<cont<<"] = "<<arreglo[cont]<<"\n";
            cont++;
        }
             
    }
    
    cout<<"\n\nEND PROGRAM";
    cin >> k;
    return 0;
}