/*
 Por medio de punteros , realizar un programa que realice la operación suma de 
 tres matrices de 3*3. En la matriz resultantes ademas de mostrar el resultado, 
 indicar la dirección de cada uno de los datos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

const int max =10;
int *matriz1[max];
int *matriz2[max];
int *matriz3[max];
int *matrizresultado[max];

void imprimirmatriz(int *matriz[max], int num_filas, int num_columnas ){
    for (int i = 0; i < num_filas; ++i)
    {
        for (int j = 0; j < num_columnas; ++j)
            printf("|%d|", *(*(matriz + i) + j));
        
        printf("\n");
    }
}

void data()
{
    //m1
    *(*(matriz1 + 0) + 0) = 3;
    *(*(matriz1 + 0) + 1) = 5;
    *(*(matriz1 + 0) + 2) = 4;

    *(*(matriz1 + 1) + 0) = -6;
    *(*(matriz1 + 1) + 1) = 2;
    *(*(matriz1 + 1) + 2) = 9;
    
    *(*(matriz1 + 2) + 0) = 1;
    *(*(matriz1 + 2) + 1) = 2;
    *(*(matriz1 + 2) + 2) = 3;
    
    //m2
    *(*(matriz2 + 0) + 0) = 1;
    *(*(matriz2 + 0) + 1) = 2;
    *(*(matriz2 + 0) + 2) = 3;

    *(*(matriz2 + 1) + 0) = 4;
    *(*(matriz2 + 1) + 1) = 6;
    *(*(matriz2 + 1) + 2) = 6;
    
    *(*(matriz2 + 2) + 0) = 7;
    *(*(matriz2 + 2) + 1) = 8;
    *(*(matriz2 + 2) + 2) = 9;
    
    
    //m3
    *(*(matriz3 + 0) + 0) = 2;
    *(*(matriz3 + 0) + 1) = 4;
    *(*(matriz3 + 0) + 2) = 6;

    *(*(matriz3 + 1) + 0) = -7;
    *(*(matriz3 + 1) + 1) = 8;
    *(*(matriz3 + 1) + 2) = 9;
    
    *(*(matriz3 + 2) + 0) = 3;
    *(*(matriz3 + 2) + 1) = 2;
    *(*(matriz3 + 2) + 2) = 1;
}

void suma(){
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){

        *(*(matrizresultado + i) + j) = *(*(matriz1 + i) + j) + *(*(matriz2 + i) + j)+ *(*(matriz3 + i) + j);
        }
    }
}
/*******MAIN********/
int main() {
    for (int j = 0; j < 3; ++j){
        matriz1[j] = (int *)malloc(3 * sizeof(int));
        matriz2[j] = (int *)malloc(3 * sizeof(int));
        matriz3[j] = (int *)malloc(3 * sizeof(int));
        matrizresultado[j] = (int *)malloc(3 * sizeof(int));
    }
    printf("___________PARCIAL________________\n");
    data();
    printf("\n*****MATRIZ 1******\n");
    imprimirmatriz(matriz1,3, 3);
    printf("\n*****MATRIZ 2******\n");
    imprimirmatriz(matriz2,3, 3);
    printf("\n*****MATRIZ 3******\n");
    imprimirmatriz(matriz3,3, 3);
    printf("\n***********************\n");
    suma();
    // printf("->m1 [0 0]   %d",*(*(matriz1 + 0) + 0) );
    // printf("\n->m1 [0 1]   %d",*(*(matriz1 + 0) + 1) );
    // printf("\n->m1 [0 2]   %d",*(*(matriz1 + 0) + 2) );
    printf("\n*****RESULTADO******\n");
    imprimirmatriz(matrizresultado,3, 3);
    printf("\n*****RESULTADO CON DIRECCION******\n");
     for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            printf("|%d| %d\t", *(*(matrizresultado + i) + j) , (*(matrizresultado + i) + j));
        
        printf("\n");
    }
    getch();
    return 0;
}
