// Realice el conteo: Consonantes, Digitos (Numeros), Caracteres en blanco

#include <stdio.h>
#include <ctype.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


void scan_frase(char linea[], int *pVo); 
int Vo =0;      
int Co =0; 
int Es =0;
int No = 0;

int main(void) 
{
	char frase [80];

	printf("Introducir una frase \n  ");
	gets(frase);
	//scanf("%[^\n]", frase);
	scan_frase(frase, &Vo);
 	printf("\n Numero de Vocales = %d", Vo);
 	printf("\n Numero de Consonantes = %d", Co);
 	printf("\n Numero de Espacios = %d", Es);
 	printf("\n Numero de digitos = %d -------- %c", No, 165);
}

void scan_frase(char frase[], int *pVo)
{
  	char *p_frase[10];
  	char c;
  	int contar =0;
  	
	while((c=toupper(frase[contar])) !='\0')
	{  
      	if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U' ) 
		{	
			++*pVo;
		}  
        if(c == ' ')
        {
		 //printf("HYA UN ESPACIO \n  ");
		 Es++;
        }
        if (c=='B'||c=='C'||c=='D'||c=='F'||c=='G'
		||c=='H'||c=='J'||c=='K'||c=='L'||c=='M'
		||c=='N'||c==165 ||c=='P'||c=='Q'||c=='R'||c=='S'
		||c=='T'||c=='V'||c=='W'||c=='X'||c=='Y'||c=='Z' ) 
		{	
			Co++;
		}
		if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'
		||c=='8'||c=='9')
		{
			No++;
		}
    	++contar;
    }
  	return;
  }
  

  //Ejercicios propuesto 
  //1. Completar el programa, donde indique la dirección de cada volcal en una palabra de 10 caracteres
  //2. Realice el conteo: Consonantes, Digitos (Numeros), Caracteres en blanco
  //3. Indique cuantas vocales hay. (Ejemplo: en la frase hay A=5,  E=8 etc)
