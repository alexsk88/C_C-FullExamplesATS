//1. Imprimir solo la posicion, dato y
//direccion de los datos enteros pares (Modificar el ejemplo).
#include <stdio.h>

int main()
{	
	char x[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
	int i;     //Posicion del dato numero declarado 
	
	for (i=0; i <=19; ++i)
	{  
		if(i%2 ==0)
		{
			printf("\n i=%d.  x[i]= %d.", i, x[i]);  
			printf("    &x[i]=%x. ", &x[i]);
		}   
	}
}
