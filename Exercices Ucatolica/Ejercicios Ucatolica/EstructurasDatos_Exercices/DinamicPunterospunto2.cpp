#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

const int max =10;
int num_filas_m1, num_columnas_m1;
int num_filas_m2, num_columnas_m2;
int *matriz1[max];
int *matriz2[max];
int *matrizresultado[max];

void imprimirmatriz(int *matriz[max], int num_filas, int num_columnas ){
    for (int i = 0; i < num_filas; ++i)
    {
        for (int j = 0; j < num_columnas; ++j)
            printf("|%d|", *(*(matriz + i) + j));
        
        printf("\n");
    }
    
}


void llenarmatriz(int *matriz[max], int num_filas, int num_columnas)
{
    for (int i = 0; i < num_filas; ++i)
    {
        for (int j = 0; j < num_columnas; ++j){
            printf("\n DIGITE VALOR [%d][%d]: ",i, j);
            scanf("%d", (*(matriz + i) + j));
        }
        printf("\n");
    }
    
}

void multiplicacion(int f,int c){

    for (int i = 0; i < f; ++i){
        for (int j = 0; j < c; ++j){
            
            int sum =0;   
            for (int m = 0; m < c; m++){
                
                int num1 = *(*(matriz1 + i) + m);
                int num2 = *(*(matriz2 + m) + j);
                // sum += (*(*(matriz1 + i) + m))  *  (*(*(matriz2 + m) + j));
                sum += (num1) * (num2);
            }
             *(*(matrizresultado + i) + j) = sum;
        }
    }
}


/*******MAIN********/
int main() {
    printf("\n\n_____________________\n");
    
    printf("****MATRIZ 1 ******");
    printf("\nNUMERO DE FILAS: ");
    scanf("%d", &num_filas_m1);
    printf("\nNUMERO DE COLUMNAS: ");
    scanf("%d", &num_columnas_m1);

    for (int j = 0; j < num_filas_m1; ++j){
        matriz1[j] = (int *)malloc(num_columnas_m1 * sizeof(int));
        // matriz2[j] = (int *)malloc(num_columnas_m1 * sizeof(int));
    }
    printf("\n\n_____________________\n");
    llenarmatriz(matriz1,num_filas_m1, num_columnas_m1);

    printf("****MATRIZ 2 ******");
    printf("\nNUMERO DE FILAS: ");
    scanf("%d", &num_filas_m2);

    while (num_columnas_m1 != num_filas_m2)
    {
        printf("!!Las Columnas matriz 1 deben");
        printf("ser iguales ques a la filas de matriz 2 !!");
        printf("\nNUMERO DE FILAS: ");
        scanf("%d", &num_filas_m2);
    }
    
    printf("\nNUMERO DE COLUMNAS: ");
    scanf("%d", &num_columnas_m2);
     for (int j = 0; j < num_filas_m2; ++j){
        matriz2[j] = (int *)malloc(num_columnas_m2 * sizeof(int));
        // matriz2[j] = (int *)malloc(num_columnas_m1 * sizeof(int));
    }
    llenarmatriz(matriz2,num_filas_m2, num_columnas_m2);

    printf("\n***********\n");
    imprimirmatriz(matriz1,num_filas_m1, num_columnas_m1);
    printf("\n***********\n");
    imprimirmatriz(matriz2,num_filas_m2, num_columnas_m2);


    for (int j = 0; j < num_filas_m1; ++j){
            matrizresultado[j] = (int *)malloc(num_columnas_m2 * sizeof(int));
            // matriz2[j] = (int *)malloc(num_columnas_m1 * sizeof(int));
        }
   multiplicacion(num_filas_m1, num_columnas_m2);

    // int num = 999;
    // *(*(matriz1 + 0) + 1) = num;
    // printf("->%d",*(*(matriz1 + 0) + 1));
    
  printf("\n*****RESULTADO******\n");
    imprimirmatriz(matrizresultado,num_filas_m1, num_columnas_m2);

    getch();
    return 0;
}
