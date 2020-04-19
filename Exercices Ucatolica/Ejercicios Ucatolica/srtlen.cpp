#include <iostream>
#include <conio.h>
#include <string.h>

/* Con esta libreria podemos tener salidas y 
entradas mas facil que con printf y scanf

Para mi es mejor porque no hayq que especificar 
que tipo de datos, se ve mas organizado y se puede
concatenar mas facil

cout siempre va con " << " -> Esto imprime datos
cin siempre va con " >> " -> esto guarda datos
*/
using namespace std;

int main()
{
    char cadena[100];
    int longitud=0;

    cout<<"Ingrese la palabra \n";
    cin.getline(cadena,100,'\n');
    cout<<"La palabra es : "<<cadena<<"\n";
    longitud = strlen(cadena);// Mide el ancho de un arreglo
    cout<<"La cadena tiene :"<<longitud<<" caracteres \n\n";
  
    if (longitud >10)
    {
        cout<<"Supera los diez caracteres";
    }
    else if (longitud < 10)
    {
        cout<<"NO NO Supera los diez caracteres";        
    }
    else if (longitud == 10)
    {
        cout<<"Tiene diez caracteres exactamente";        
    }    

    getch();
    // printf("\n \n");system("pause");
    return 0;
}