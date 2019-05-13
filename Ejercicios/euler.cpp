#include <stdio.h>
#include <conio.h>

int numero;
float eu;

int factorial(int num)
{
	int i;
	int fac=1;
	for (i=1;i<=num;i++)
	{
		fac=fac*i;
	}
	return fac;
}


float euler(int num)
{
	int i;
	float resultado=1;
	printf("num vale %d",num);
	for (i=1;i<=num;i++)
	{
		resultado = resultado + (1/float(factorial(i)));

	}
	
	return resultado;
}

main()
{

	printf("Ingrese el numero de fracciones: ");
	scanf ("%d",&numero);
	eu=euler(numero);
	printf("\n El numero euler es %f",eu);

    getch();

    //  Ingrese el numero de fracciones: 5
    //  num vale 5
    //  El numero euler es 2.716667
}
