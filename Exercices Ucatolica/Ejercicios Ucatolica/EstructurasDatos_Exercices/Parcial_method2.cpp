#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAXFIL 20 //Define maximo de elementos

//Prototipos de funciones

void leerentrada(int *a[MAXFIL], int nfilas, int ncols);
void sumar(int *a[MAXFIL], int *b[MAXFIL], int *c[MAXFIL], int *res[MAXFIL]);
void escribirsalida(int *c[MAXFIL], int nfilas, int ncols);

void imprimir(int *a[MAXFIL], int fila, int col);

int main()
{

    int fila, nfilas, ncols;

    int *a[MAXFIL], *b[MAXFIL], *c[MAXFIL], *res[MAXFIL]; ; //Definición de punteros

    //Reserva inicial de memoria
    for (fila = 0; fila < 3; ++fila)
    {
        a[fila] = (int *)malloc(3 * sizeof(int));
        b[fila] = (int *)malloc(3 * sizeof(int));
        c[fila] = (int *)malloc(3 * sizeof(int));
        res[fila] = (int *)malloc(3 * sizeof(int));
    }

    printf("\n\n Primera tabla: \n");
    leerentrada(a, 3, 3);

    printf("\n\n Segunda tabla: \n");
    leerentrada(b, 3, 3);

    printf("\n\n Tercer tabla: \n");
    leerentrada(c, 3, 3);

    sumar(a,b,c,res);
    imprimir(res, 3, 3);
    
      printf("\nmemora\n");
    for (int fila = 0; fila < 3; ++fila)
    {
        for (int col = 0; col < 3; ++col)
            printf(" %4d  ", (*(res + fila) + col));
        printf("\n");
    } 
    getch();
    return 0;
}


void imprimir(int *res[MAXFIL], int m, int n)
{
    printf("\n IMPRESSION\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf("%4d", *(*(res + i) + j));
        
        printf("\n");
    }
}


void leerentrada(int *a[MAXFIL], int m, int n)
{ 
    //Leer una tabla de entrada
    int fila, col =0;
    for (fila = 0; fila < m; ++fila)
    {
        printf("\n Introducir datos para la fila # %2d  [%d][%d]\n", fila + 1, fila, col);
        for (col = 0; col < n; ++col)
            scanf("%d", (*(a + fila) + col));
    }
}

void sumar(int *a[MAXFIL], int *b[MAXFIL], int *c[MAXFIL],int *res[MAXFIL])
{

    //Suma de elementos de dos tablas de enteros
    int fila, col;
    for (fila = 0; fila < 3; ++fila)
        for (col = 0; col < 3; ++col)
            *(*(res + fila) + col) = *(*(c + fila) + col) + *(*(a + fila) + col) + *(*(b + fila) + col);

    return;
}

void escribirsalida(int *res[MAXFIL], int m, int n)
{

    //Suma de ekementos de dos tablas de enteros

    int fila, col;

    for (fila = 0; fila < m; ++fila)
    {
        for (col = 0; col < n; ++col)
            printf("%4d", *(*(res + fila) + col));
        printf("\n");
    } 

 

    return;
}