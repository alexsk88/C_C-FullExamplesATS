/*Ejercicio 2:  Determinar si un numero es primo o no; con puteros
 y ademas indicar en que posicion de memoria se guardo el numero.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    
    int numero[] = {1,2,3,4,8};

    // COMO ES UN ARRAY no hay nesecidad de pasarle
    // el & antes de la variable SOLO EN ARRAYS
    int *dir_numero = numero;

    for (int i = 0; i < 5; i++)
    {
        cout<<"ELEMENTO"<<"["<<i<<"]"<<" : "<< *dir_numero++<<"\n";
        // Con el ++ le digo que imprima todos los valore
        // pues se me hace raro el ++, pero asi es.

        // Ya hize la prueba y no se pudes asi *dir_numero[i] NOTHING
    }
    
    getch();
    return 0;
}