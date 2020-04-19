#include <stdio.h>
#include <conio.h>

 
int triangulo(int n, int k)
{

    if (k == 0 || k == n)
    {
        return 1;
    }

    else
    {
        return triangulo(n-1, k-1) + triangulo(n-1, k);
    }

}

main()
{
    int i,j,cant;
    printf("Ingrese la cantidad de filas del triangulo de Pascal ");
    scanf("%d",&cant);

    for (i=0; i<cant; i++)
    {
        for (j=0; j<=i; j++)
        {
         printf("%d ",triangulo(i,j));
        }
        printf("\n");
    }   

    getch();
    // ESTO IMPRIME CON num= 10
    //1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // 1 5 10 10 5 1
    // 1 6 15 20 15 6 1
    // 1 7 21 35 35 21 7 1
    // 1 8 28 56 70 56 28 8 1
    // 1 9 36 84 126 126 84 36 9 1
}