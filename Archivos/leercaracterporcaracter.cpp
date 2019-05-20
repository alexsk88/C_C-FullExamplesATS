#include <stdio.h>
#include <conio.h>

main()
{
	FILE *archivo; // Crear un archivo con apuntador

	char caracter;
    char prueba[]= "hola";
    // Abriendo un archivo 
	archivo = fopen("prueba.txt","r");


	if (archivo == NULL)
    {
        printf("\nError de apertura del archivo. \n\n");
    }
    else
    {
        printf("\nEl contenido del archivo de prueba es \n\n");

        //  fgetc() Lee caracter por caracter

        // EOF es como, no hay mas caracteres. El final del texto
        while( (caracter = fgetc(archivo)) != EOF)
	    {
            // Parece como un recoorido de caracteres.
            //imprimer pos por pos el imprime el caracter
			printf("%c",caracter);


	    }
    }

    // Cerrar el archivo
    fclose(archivo);

    getch();
}