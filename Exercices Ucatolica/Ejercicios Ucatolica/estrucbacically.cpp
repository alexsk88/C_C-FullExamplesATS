#include <iostream>
#include <conio.h>

using namespace std;

/* Utilizando estructuras sencillas
*/
struct Carro
{
    char modelo[100];
    int year;
}persona1;


int main()
{
    
    cout<<"Nombre: ";
    cin.getline(persona1.modelo,100, '\n');
    
    cout<<"Year: ";
    cin>>persona1.year;

    cout<<"Carro modelo: "<< persona1.modelo<<" Year "<<persona1.year;

    
    getch();
    // printf("\n \n");system("pause");
    return 0;
}