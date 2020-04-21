//Modificar el ejemplo 1 de asignación de memoria dinamica,
// donde organice de mayor a menor e imprima solo los numeros primos 
//(Debe imprimir: Posición, dirección y numero primo).

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void reordenar(int n, int *x);
void mostrar(int n, int *x);
bool primo(int num);

int i, n, *x;

int main()
{
    printf("\n Cuantos numeros seran introducidos? \n");
    scanf("%d", &n);
    fflush(stdin);
    printf("\n");

    x = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; ++i)
    {
        printf("\n i = %d   x+i = %X      x = ", i, x + i);
        scanf("%d", x + i);
        fflush(stdin);
    }

    reordenar(n, x);
    mostrar(n, x);

    getch();
    return 0;
}

void mostrar(int n, int *x)
{

    printf("\n\n PRIMOS DE MAYOR A MENOR: \n\n");
    for (i = 0; i < n; i++)
    {
        if (primo(*(x + i)))
            printf("\n x[%d] = %d  ---  memoria = %X ", i, *(x + i), x + i);
    }
}


bool primo(int num)
{
    int cont=0;

    for(int w=1;w<=num;w++){
		if( num % w == 0)
			cont++;
	}
	
	if(cont>2)
        return false;
    else
        return true;

}

void reordenar(int n, int *x)
{
    // METODO DE ORDENACION BURBUJA MAYOR A MENOR
    int i, elem, temp;
    for (elem = 0; elem < n - 1; ++elem)
        for (i=elem+1; i<n; ++i)
            if (*(x + i) > *(x + elem))
            {
                temp = *(x + elem);

                *(x + elem) = *(x + i);
                *(x + i) = temp;
            }

    return;
}