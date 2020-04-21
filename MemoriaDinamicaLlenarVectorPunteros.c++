#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void reordenar(int n, int *x);
void mostrar(int n, int *x);

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

        // Si coloca x[i]  -> no me vota la direccion de memoria
        // de cada pos, no no
        // en cambio me vota la direccion de todo el x
        // NO SIRVE ASI es x+i
        // printf("\n i = %d   x+i = %X      x = ", i, x[i]);

        // %X  -> Imprime el valor hexadecimal
        printf("\n i = %d   x+i = %X      x = ", i, x + i);

        // No puedo hacer esto al capturar
        //con un puntero     x[0] || x[1] ..

        // Es x+1  || x+2
        // INTERESTING
        // scanf("%d", x[i]); // ERROR
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
    printf("\n\n Lista de numeros reordenados: \n\n");
    for (i = 0; i < n; i++) // *(x+i) -> Mustra el valor normal, NO HEXADECIMAL
        printf("\n i = %d    x+i = %X    x = %d     ", i, x + i, *(x + i));
}

void reordenar(int n, int *x)
{
    // METODO DE ORDENACION BURBUJA
    int i, elem, temp;
    for (elem = 0; elem < n - 1; ++elem)
        // x[i] se escribe ahora *(x+i) y x[elem] como *(x+elem)
       	for (i=elem+1; i<n; ++i)//Encontrar el elemento menor y organizarlo de menor a mayor
            if (*(x + i) > *(x + elem))
            {
                //Intercambia de posición i del elemento menor para organizar de menor a mayor
                temp = *(x + elem);

                *(x + elem) = *(x + i);
                *(x + i) = temp;
            }

    return;
}