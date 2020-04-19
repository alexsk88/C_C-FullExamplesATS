#include <stdio.h>

int main()
{	
	char x[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
	int i;     //Posición del dato numero declarado 
	
	for (i=0; i <=19; ++i)
	{  
	    //Imprime posición del dato, en donde se almacena el dato y el puntero asignado a cada dato       
		printf("\n i=%d.     x[i]= %d.     *(x+i)= %d.", i, x[i], *(x+i));
		//Dirección de cada posición donde se encuentran los datos     
		printf("    &x[i]=%x.      x+i=%x. ", &x[i], (x+i));
	}
}
