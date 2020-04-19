#include <stdio.h>
#include <string.h>
 
int main()
{
 	FILE *archivo;
 	
	char caracteres[100];
 	char cadeneta[100];
	char cadena[]= " ";
	
	int regla= 8, *p_regla= &regla;
	
	int espacios= 0;
 	
 	archivo = fopen("genesis.txt","r");
 	if (archivo != NULL)
 	{
 	    printf("\nEl contenido del genesis es \n\n");
 	    
 	    int x = 0;
 	    while (feof(archivo) == 0)
 	    {
	 		fgets(caracteres,100,archivo);
	 		printf("%s",caracteres);
	 		x++;

			
			for(int i = 0; i<strlen(caracteres)-1;i++)
			{
				// Hay que quitarle un caracter:
				
				/*
				fgets : Leerá hasta n-1 caracteres o hasta que lea un cambio de línea '\n' o 
				un final de archivo EOF. En este último caso, el carácter de cambio 
				de línea '\n' también es leído.*/
				
				
//				printf("\n");
//				printf("%c ...[%d]" , caracteres[i],i);
//				printf("\n");	
				
				cadeneta[i]= caracteres[i]; // Entonces me queda la palabra completa sin espacios
				// lista para ser comparada
				
			}
			
			if(strlen(cadeneta)==0)
			{
				espacios++;
			}
		
			if(espacios ==3)
			{
				printf("aui comienza genesis 1:1\n");
			}
	
			//printf("%d", strcmp(cadeneta,cadena));
			
			*p_regla = strcmp(cadeneta,cadena);
			
			//printf("Caracteres: %s == Cadeneta: %s ===> |%d| \n\n", caracteres, cadeneta,*p_regla);
			
		
			
			// Hay que vaciarla o si no salen caracteres raros
			for (int o = 0; o< 100; o++)
			{
				cadeneta[o]= '\0';	
			}
			// Hay que vaciarla o si no salen caracteres raros
			
			
	 		if( x == 10)
	 		{
	 			
	 			break;
			}
 	    }
    }
    fclose(archivo);
	return 0;
}
