#include <stdio.h>
#include <iostream>
#include <string.h>
#include <conio.h>
 
#include <stdlib.h>
#include <ctype.h>

using namespace std;
int main()
{
 	FILE *fp,*archivo; // Archivo para abrir Genesis del profe

	printf("|_________________________________________|\n");
	printf("|_________Promedio de Peso Personas_______|\n");
	printf("| ________________________________________|\n\n");

	struct personas
	{
		char nombre[100];
		int talla;
		int peso;
	};
	
	personas arr[3];

	char textoExtraido [50];
	int datoExtraido[3]; 
	char sate[100];

	char buffer[80]={0};
	char bufferopen[80]={0};

	int suma =0;
	
	for (int i = 0; i < 3; i++)
	{
		sprintf(buffer, "person_%02d.txt", i);
		fp = fopen ( buffer, "wt" );

		cout<<"Persona No. "<<i<<"\n";
		cout<<"_____________________\n";

		cout<<"Ingrese nombre: ";
		cin>>arr[i].nombre;
		fprintf (fp,"%s%c", arr[i].nombre, '\n');

		cout<<"Ingrese Talla: ";
		cin>>arr[i].talla;
		fprintf (fp,"%d%c", arr[i].talla, '\n');

		cout<<"Ingrese peso: ";
		cin>>arr[i].peso;
		fprintf (fp,"%d%c", arr[i].peso, '\n');

		fclose ( fp );
		cout<<"_____________________\n\n\n";
		
	}
	
	printf("Se han guardado 5 Archivos");
	printf("\n ");
	printf("PULSA CUALQUIER BTN PARA CALCULAR PROMEDIOS \n");
	getch();

	// Abrir Archivos
	for (int i = 0; i < 3; i++)
	{
		sprintf(bufferopen, "person_%02d.txt", i);
		printf("file name: %s \n", bufferopen);
		archivo = fopen(bufferopen, "rt");

		// Guarda linea por linea, OJO !!
		fscanf (archivo, "%s", sate );
		fscanf (archivo, "%d", &datoExtraido[0] );
		fscanf (archivo, "%d", &datoExtraido[1] );
		// printf ("Talla vale %d \n", datoExtraido[0]);
		// printf ("PESO vale %d \n", datoExtraido[1]);
		fclose(archivo);
		printf("\n");

		suma = suma + datoExtraido[1];
	}

	//printf("La suma es: %d", suma);

	//promedio =  suma / 3;

	//printf("El Promedio de los peso es %d", promedio);

	float nu = suma/3;
	cout<<"Promedio es: "<<nu;


    getch();
	return 0;
}