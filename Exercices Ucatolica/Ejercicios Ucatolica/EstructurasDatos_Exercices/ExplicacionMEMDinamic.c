/*Punteros y formaciones Multidimencionales

Suponga que x es una formación bidimencional de enteros con 10 filas y 20 columnas, 
se puede declarar x, como;*/
// Ejemplo 1
int (*x)[20];     

/* x se define como un puntero a un grupo de formaciones unidimencionales consecutivas 
de 20 elementos enteros.
Asi x apunta a la primera de las formaciones de 20 elementos, que es en realidad la fila 0 
de la formación bidimencional.
Analogicamente *(x+1) apunta a la segunda formación  de 20 elementos, fila 1.  y asi sucesivamente*/
//En vez de;

int x[10][20];


//Ejemplo 2

/* Suponga que x es una formación bidimencional de 10 filas y 20 columnas, como se declaro 
en el anterior ejemplo. El elemento de la fila 2, columna 5,
puede ser accedidio escri. */

x[2][5];

//o

//  *(*(x+2)+5);

/*    

*(x+2) es un puntero de toda la fila 2, al primer elemento de la fila 2.
(*(x+2)+5) al sumarle 5 a este puntero, es un puntero al elemento 5(sexto elemento) de la fila 2.
*(*(x+2)+5) Este seria un puntero a la fila 2 de la columna 5 X[2][5]  */