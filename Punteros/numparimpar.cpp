/*Ejercicio 1: Comprobar si un numero es par o impar, y señalar la posicion
de memoria donde se esta guardando el numero. Con punteros.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, *dir_num;
    

    cout<<"Ingrese numero: ";
    cin>>num;
    dir_num = &num;

    if ( (*dir_num % 2) == 0)
    {
        cout<<"El numero es par \n";
         cout<<"Y su direccion es "<<dir_num;
    }
    else
    {
        cout<<"El numero es IMPAR* \n";
        cout<<"Y su direccion es "<<dir_num;
    }
    
    // float n1 = 4.5;
    // float n2 = 3.6;
    // float n3 = 4.0;

    // float suma = (n1*0.35)+(n2*0.35)+(n3*0.3);

    // cout<<"\n Su nota es: " << suma;
    getch();
    return 0;
}