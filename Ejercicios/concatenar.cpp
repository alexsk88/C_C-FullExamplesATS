#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char cadena1[] = "primer mensaje ";
    char cadena2[] = "segundo mensaje";
    char cad3[100];

    strcpy(cad3,cadena1); // Copio el primer mensaje a la cadena

    strcat(cad3,cadena2);// concanteno 3. a la cadena tres le concateno la cad2

    cout<<"La cadena quedo: \n"<< cad3;

    getch();
    // printf("\n \n");system("pause");
    return 0;
}