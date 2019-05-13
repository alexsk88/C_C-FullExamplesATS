#include <iostream>

int main()
{
    // Entrada de datos, para estas hay que colocar un "&"
    // antes de pedir un dato
    int sum;
    char name[50];
    printf("Digite numero \n");
    // Asi se pide un numero, tambien sirve pra cualquier caracter
    // con el "&" antes, siempre
    scanf("%i",&sum); // Si es un arreglo no hay que colocar el "&"
    //scanf("%s", name); // Algo asi

    //________________
    // Ahora vamos a ver el get es mejor que que sacanf
    // porque al haber un espacio, termina la ejecucion
    // en cambio con gets no pasa eso

    _flushall(); // Puto c, mas feo.
    // Esto es para limpiar el buffer, ya que cuando doy
    // enter el fuck programa piensa que enter es el nombre que estoy 
    // pidiendo.

    printf(" \nDigite tu nombre \n");
    gets(name);

    printf("\n \n");system("pause");
    return 0;
}