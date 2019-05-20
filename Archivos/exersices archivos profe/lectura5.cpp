#include <stdio.h>

 
main ()
{
 	FILE *archivo;
 	char buffer[100];
 	archivo = fopen ("prueba.txt", "r");
 	fscanf(archivo, "%s" ,buffer);
 	printf("%s",buffer);
 	fclose (archivo);
}
