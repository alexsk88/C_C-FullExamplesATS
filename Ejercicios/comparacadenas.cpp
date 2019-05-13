#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char cadena1[] = "hola";
    char cadena2[] = "hola";

    /*strcmp() Esta funcion compara si dos cadena son iguales
    Si son iguales retorna cero si no uno
    tambie compara si una es mayor alfabaticamente 
    si es mayor alfabeticamente tambien retorna cero
    */

   if (strcmp(cadena1,cadena2) == 0)
   {
       cout<<"Si son iguales";
   }
   else
   {
       cout<<"No son iguales";
   }
   
    getch();
    // printf("\n \n");system("pause");
    return 0;
}