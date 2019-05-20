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
 			fgets(caracteres,1000,archivo);
 			printf("%s",caracteres);
 	    }
    }
    fclose(archivo);
}
