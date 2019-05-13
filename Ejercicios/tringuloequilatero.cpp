#include <stdio.h>
#include <conio.h>

void trianguloRecursivo (int x, int original)
{
    int i;

    if (x<=0)
    {
     return;
    }

    else
    {
        trianguloRecursivo(x-1, original);

        for (i=0; i<(original-x); i++)
        {
            printf(" ");
        }
        for (i=0; i<x; i++)
        {
         printf("* ");
        }
        printf("\n");
    }
}

main()
{
    int tam;
    printf("Ingrese el tamano del triangulo ");
    scanf("%d",&tam);
    trianguloRecursivo(tam,tam);
    getch();

    // Esto imprime con num= 5
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
}