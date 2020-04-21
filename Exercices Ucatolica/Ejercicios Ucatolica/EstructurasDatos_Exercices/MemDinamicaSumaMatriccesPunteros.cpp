#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAXFIL 20 //Define maximo de elementos

//Prototipos de funciones

void leerentrada(int *a[MAXFIL], int nfilas, int ncols);
void calcularsuma(int *a[MAXFIL], int *b[MAXFIL], int *c[MAXFIL], int nfilas, int ncols);
void escribirsalida(int *c[MAXFIL], int nfilas, int ncols);

void imprimir(int *a[MAXFIL], int fila, int col);

int main()
{

    int fila, nfilas, ncols;

    int *a[MAXFIL], *b[MAXFIL], *c[MAXFIL]; //Definición de punteros

    printf("Cuantas filas?");
    printf("\n");
    scanf("%d", &nfilas);
    printf("Cuantas columnas?");
    printf("\n");
    scanf("%d", &ncols);

    //Reserva inicial de memoria
    for (fila = 0; fila < nfilas; ++fila)
    {
        a[fila] = (int *)malloc(ncols * sizeof(int));
        b[fila] = (int *)malloc(ncols * sizeof(int));
        c[fila] = (int *)malloc(ncols * sizeof(int));
    }

    printf("\n\n Primera tabla: \n");
    leerentrada(a, nfilas, ncols);
    // printf("\n\n Segunda tabla: \n");
    // leerentrada(b, nfilas, ncols);

    getch();
    imprimir(a, nfilas, ncols);
    //calcularsuma(a, b, c, nfilas, ncols);
    //printf("\n\n Suma de los elementos: \n");
    //escribirsalida(c, nfilas, ncols);

    free(a);
    free(b);
    free(c);

    return 0;
}


void imprimir(int *a[MAXFIL], int m, int n)
{
    printf("\n IMPRESSION\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf("%4d", *(*(a + i) + j));
        
        printf("\n");
    }
}


void leerentrada(int *a[MAXFIL], int m, int n)
{ //Leer una tabla de entrada

    int fila, col;

    for (fila = 0; fila < m; ++fila)
    {
        printf("\n Introducir datos para la fila # %2d\n", fila + 1);
        for (col = 0; col < n; ++col)
            scanf("%d", (*(a + fila) + col));
    }


}

void calcularsuma(int *a[MAXFIL], int *b[MAXFIL], int *c[MAXFIL], int m, int n)
{

    //Suma de ekementos de dos tablas de enteros

    int fila, col;
    for (fila = 0; fila < m; ++fila)
        for (col = 0; col < n; ++col)
            *(*(c + fila) + col) = *(*(a + fila) + col) + *(*(b + fila) + col);

    return;
}

void escribirsalida(int *a[MAXFIL], int m, int n)
{

    //Suma de ekementos de dos tablas de enteros

    int fila, col;

    for (fila = 0; fila < m; ++fila)
    {
        for (col = 0; col < n; ++col)
            printf("%4d", *(*(a + fila) + col));
        printf("\n");
    } 

    return;
}