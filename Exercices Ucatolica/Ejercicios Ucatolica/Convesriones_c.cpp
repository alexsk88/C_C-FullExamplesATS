#include <iostream>
#include <conio.h>
#include <string.h>

#include <stdlib.h> 
// Para transformar un string a Entero o Flotante

// atoi() -> tranforma a integer
// atof() -> tranforma a flotante
// atol() -> tranforma a long
// atoll() -> tranforma a long long

using namespace std;

int main()
{
    char cad[] = "123";
    int numero = 0;

    numero = atoi(cad);

    cout<<"El valor es: "<<numero;
    
    getch();
    // printf("\n \n");system("pause");
    return 0;
}