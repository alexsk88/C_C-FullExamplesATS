

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // recorro array con punteros y mustre dir de memoria
    int numero[10];
    int *dir_numero = numero;

    for (int i = 0; i < 10; i++)
    {
        cout<<i<<" : ";
        cin>>numero[i];
    }

     cout<<" \n \n";

    for (int i = 0; i < 10; i++)
    {
        // cout<<"NUM ["<<i<<"] : "<<numero[i]<<"\n";
        cout<<"NUM ["<<i<<"] : "<<*dir_numero<<" -> ";
        dir_numero++;

        // EN cambio aqui no va el ++ en la dir de memoria
        // ?? jmmmmm
        cout<<"Direccion de memoria es "<<dir_numero<<"\n";

    }

    getch();
    return 0;
}