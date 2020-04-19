 //1. Completar el programa, donde indique la dirección de cada volcal en una palabra de 10 caracteres

#include <stdio.h>
#include <ctype.h>
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


void scan_frase(char linea[], int *pVo); 

int main(void) 
{
	char frase [80];
	int Vo =0;      

	printf("Introducir una frase \n  ");
	scanf("%[^\n]", frase);
	scan_frase(frase, &Vo);
 	printf("\n Numero de Vo= %d", Vo);

	getch();
	return 0;
}

void scan_frase(char frase[], int *pVo)
{
  	char *p_frase[10];
  	char c;
  	int contar =0;
  	
	while((c=toupper(frase[contar])) !='\0'   )
	{  
		p_frase[contar] = &frase[contar];
		//cout<< p_frase[contar]<<"-: "<<&p_frase[contar]<<"\n";
		 
      	if (c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U' ) 
		{
			cout<< c<<"-: "<<&p_frase[contar]<<"\n";	
			++*pVo;
		}  
    	++contar;
    }
  	return;
  }
  
  
  //Ejercicios propuesto 
  //1. Completar el programa, donde indique la dirección de cada volcal en una palabra de 10 caracteres
  //2. Realice el conteo: Consonantes, Digitos (Numeros), Caracteres en blanco
  //3. Indique cuantas vocales hay. (Ejemplo: en la frase hay A=5,  E=8 etc)
