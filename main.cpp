
#include <stdio.h>
#include <conio.h>

int main() 
{
    FILE* archivo;
    archivo = fopen("escritura.txt", "w");
    fputs("Esto de archivos está como mamey (linea 1)\n", archivo);
    fputs("pero fijo ahorita se complica (linea 2)\n", archivo);
    fputs("pongale cuidado (linea 3)", archivo);
    fclose(archivo);
    printf("Proceso completado");

	getch();
	return 0;
}