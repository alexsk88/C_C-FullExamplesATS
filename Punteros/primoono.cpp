/*Ejercicio 2:  Determinar si un numero es primo o no; con puteros
 y ademas indicar en que posicion de memoria se guardo el numero.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, *dir_num;
    bool flag;

    cout<<"Ingrese numero : ";
    cin>>num;

    dir_num = &num;

    // Este metodo es del profe WILLIAM
    
    if(*dir_num % 2 == 0)
    {
        flag = false;
    }
    else if(*dir_num % 3 == 0)
    {
        flag = false;
    }else if (*dir_num % 5 == 0)
    {
        flag = false;
    }
    else
    {
        flag = true;
        // ACA YA ES PRIMO
    }   
 
    cout<<"______________\n";

    if (flag)
    {
        cout<<"Es primo \n";
        cout<<"Su direccion es: "<<dir_num;
    }
    else
    {
        cout<<"NO ES primo \n";
        cout<<"Su direccion es: "<<dir_num;
    }
    
    getch();
    return 0;
}