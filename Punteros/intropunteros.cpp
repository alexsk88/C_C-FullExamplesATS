#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int num, *dir_num;

    num = 10;

    // Apunto a direccion de memoria con el   &  asigno la memoria
    dir_num = &num;

    cout<<" Direccion de num: "<<dir_num;
    cout<<"\n Valor del puntero: "<<*dir_num;


    getch();
    return 0;
}