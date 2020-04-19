#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
   cout<<"Alfin sirvio esto\n";
    char cadena1[] = "hola";
    char cadena2[] = "hola";


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