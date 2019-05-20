#include <stdio.h>
 
main()
{
 	FILE *archivo;
 	char caracteres[1000];
 	archivo = fopen("prueba.txt","r");
 	
 	if (archivo != NULL)
    {
 	    printf("\nEl contenido del archivo de prueba es \n\n");
 	    while (feof(archivo) == 0)
 	    {
 			fread(caracteres, sizeof(char), 20, archivo);
 			printf("%s\n",caracteres);
 			
 	    }
    }
    fclose(archivo);
}
