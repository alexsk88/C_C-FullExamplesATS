//ESCRIBIR UN PROGRAMA QUE LLENE UN ARREGLO CON LOS NÚMEROS 
//ENTEROS COMPRENDIDOS ENTRE 4 Y 14.

#include <iostream>
using namespace std;

int main()
{
    int arreglo[11],k;
    int nums = 4;
    for (int i = 0; i < 14; i++)
    {
       arreglo[i] = nums;
       nums++;
    }

    cout<<"\n\n";
    int tamarr =sizeof(arreglo) / sizeof (int); 
    
    for (int i = 0; i < tamarr; i++)
    {
        cout<<"arreglo["<<i<<"] = "<<arreglo[i]<<"\n";
    }
    
    
    cout<<"\n\nEND PROGRAM";
    cin >> k;
    return 0;
}