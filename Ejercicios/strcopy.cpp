#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char cadena[20] = "Alexander";
    char cadena2[20];

    /* La funicion strcpy() copea la palabra
    Tiene dos paramentros
    (cadenavacia, dedondeseva a copiar);
    */

   strcpy(cadena2,cadena);

   cout<<"La cadena dos es: " << cadena2; 


    getch();
    // printf("\n \n");system("pause");
    return 0;
}