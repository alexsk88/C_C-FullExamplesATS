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
    char numero[3];
    cout<<"hola marte \n";
    cout<<"Ingrese Numero \n";
    //gets(numero); // gets captura datos
    // pero tiene un problema y es que guarda toda la cadena
    // sin importar que yo tenga un array pequeño

    //EJ. si tengo un array de 2 y pido una palabra de 3
    // el gets() lo guarda, roba memoria para guardar la variable
    // para arreglar esto existe el cin.getLine()
    // que tiene tres parametros

    /*
    1. nombre de la variable a dode va a guarda
    2. Max de espacios que quiero
    3. cuando termina la ejecucion
    */

   cin.getline(numero, 4,'\n');
   // guarde en numero, maximo 50 espacio, cuando alla un saltto de linea

    cout<<"el numero es : "<<numero<<" ....";

    getch();
    // printf("\n \n");system("pause");
    return 0;
}