#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>

using namespace std;
/*
ESTO ES EN C++ entonces, vamos a hacer una prueba con c
*/
void escribir();

int main() 
{
    escribir();

	getch();
	return 0;
}

void escribir()
{ 
    // ofstream es un tipo en este case es un tipo Archivo,
    ofstream archivo;

    // Abrir el archivo
        // 1 parametro, nombre del archivo
        // 2 parametro, modo ?? -> si el archivo existe lo reemplazo, si no, lo crea
    archivo.open("preuba.txt",ios::out);

    // Comprobar si el archivo se creo

    if(archivo.fail())
    {
        cout<<"Error con el archivo";
        exit(1); // Asi se sale del programa, thank a stdlid
    }

    archivo<<"Hola este es la primera prueba";

    archivo.close(); // Cerrar el archivo
}
