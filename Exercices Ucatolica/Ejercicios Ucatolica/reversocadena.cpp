#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char cadena1[] = "casa";
    char cadenanew[100];

    // vamos a invertir una cadena

    // solo copie el reves de la palabra en cadenanew
    strcpy(cadenanew,strrev(cadena1)) ;

    cout<<" la cadena 1 alreves es : "<< cadenanew;

    
    getch();
    // printf("\n \n");system("pause");
    return 0;
}