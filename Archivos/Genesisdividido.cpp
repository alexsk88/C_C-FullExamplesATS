#include <stdio.h>
#include <string.h>
#include <conio.h>
 
int main()
{
 	FILE *archivo; // Archivo para abrir Genesis del profe
 	FILE *fp; // Archivo para separar archivos

	char caracteres[100]; // String para guardar cada linea
 	char cadeneta[100]; // String para guardar la linia de caractares sin en el n-1
 	
	char buffer[80]={0};// String para cambiar el nombre de los archivos

 	archivo = fopen("genesis.txt","r");// Abriendo genesis
	 
 	if (archivo != NULL)
 	{   // Si no es null se puede abrir


 	    // int x = 0;  Ayuda para no abrir tanton archivos

 	    int espacios = 0; // Esta variable quita los tres primeros espacios que hay
		/*
			GENESIS
				1 uno
			La creacion
				2 dos
			Genesis 1
				3 tres
			Genesis 1:1
		*/

		int nn= 0;
		// Me ayuda a contar cuantos archivos hay, por cada espacio en blanco
		// representa uno

 	    while (feof(archivo) == 0)
 	    {	// feof : hasta que se termine el documento da cero
           
	 		fgets(caracteres,100,archivo); // Guarde cada linea en un string de 100 pos
			 // y saque eso de archivo

	 		
			for(int i = 0; i<strlen(caracteres)-1;i++)
			{
				// Guardo la palabra sin en el n-1,
				// Podria cojer esta palabra y crear un array con 31 elelemtos y compararlo
				// pero salia mas largo 

				cadeneta[i]= caracteres[i]; 
                // Entonces me queda la palabra completa sin espacios
				// lista para ser comparada
			}
			 
            if (strlen(cadeneta)== 0)
            {
				espacios++;
				// Contamos los primeros tres espacios
            }
            
			if (espacios>2)
			{
				// Despues de que se hallan eliminado los tres primeros espacios
				// comienzo a saving this elements

				 sprintf(buffer, "gen%02d.txt", nn);
				 fp = fopen ( buffer, "a" );


				// Si hay un espacio apartir de aca significa que, tiene que pasar a 
				// otro libro, por lo tanto cierra el libro y crea uno nuevo para guardar
				if(strlen(cadeneta)== 0)
				{
					 fclose ( fp );
					 nn++;
				}
				else
				{
					// si no, significa que tiene que seguier guardando las lineas, ya que le
					// corresponde al libro que comenzamos creando
					fputs(caracteres, fp);	
				}
			
			}
				
			// Hay que vaciarla o si no, salen caracteres raros

			/* Cuando vuelva a hacer el ciclo se agregaran caracteres raros
			que no se de donde salen asi que es mejor, reiniciar esta variable
			para hacer todas las comparaciones*/

			for (int o = 0; o < 100; o++)
			{
				cadeneta[o]= '\0';	
			}
			// Hay que vaciarla o si no, salen caracteres raros




			//x++;
	 		// if( x == 24){break;} Para no abrir tanto achivos SOLO PRUEBAS

 	    }
    }

    fclose(archivo);

	printf("_______________________________________ \n");
	printf("|Genesis dividido correctamente :D xdxd| \n");
	printf("|______________________________________| \n\n");

	printf("Pulse cualquier btn to finish \n\n");
	remove("gen00.txt"); // Se crea un archivo gen00.txt que no contiende nada
	// ASI QUE LO BOORRE AL TERMINAR LA EJECUCION

		// Profe no se como evitar que salga este :/ entonces me toco asi :/

    getch();
	return 0;
}