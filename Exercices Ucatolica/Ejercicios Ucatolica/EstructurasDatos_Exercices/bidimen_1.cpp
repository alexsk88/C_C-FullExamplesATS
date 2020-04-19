// UN PROGRAMA QUE PIDA AL USUARIO LOS DATOS DE UNA MATRIZ 
// DE 2X2, Y MUESTRE SU DETERMINANTE.

#include <iostream>
using namespace std;

int main()
{
    int matriz[2][2],k;
    int cont = 0;

   cout<<"\n\nArreglo 1 \n";
    cout<<"=============== \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Digite valor en la pos";
            cout<<"["<<i<<"]"<<"["<<j<<"] = \n";
            cin>>matriz[i][j];
        }
        
    }
    cout<<"\n";

    // Recorrer en vertical

    int contv1 = 1;
    for (int m = 0; m < 2; m++)
    {
            cout<<"["<<m<<"]"<<"["<<m<<"] = " <<matriz[m][m]<<"\n";
            contv1 *= matriz[m][m];
    }

    //cout<<"\n V1 equals"<<contv1<<"\n";
    int pos=1;
    int contv2 = 1;
    for (int w = 0; w < 2; w++)
    {
        cout<<"["<<w<<"]"<<"["<<pos<<"] = " <<matriz[w][pos]<<"\n";
        contv2 *= matriz[w][pos];
        pos--;
    }

    //cout<<"\n V2 equals "<<contv2;


    cout<<"La determinante es "<<contv1 - contv2;
    cout<<"\n\nEND PROGRAM";
    cin >> k;
    return 0;
}