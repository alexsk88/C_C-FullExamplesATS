//Actualizar las cuentas de clientes (sistema de facturación simplificado)
//Mantener las cuentas de clientes como una formación externa de estructuras

#include <stdio.h>

void leerentrada(int i);
void escribirsalida(int i);

struct fecha
{ //declaración de estructura fecha
    int mes;
    int dia;
    int anio;
};

struct cuenta
{ //declaración de estructura cuenta
    char nombre[80];
    char calle[80];
    char ciudad[80];
    int no_cuenta;           //(Entero positivo)
    int tipo_cuenta;         //A (Al día), R (retrasado) o D (delincuente)
    float anteriorsaldo;     //(cantidad no negativa)
    float nuevosaldo;        //(cantidad no negativa)
    float pago;              //(cantidad no negativa)
    struct fecha ultimopago; //estructura fecha
} cliente[100];              //mantener hasta 100 clientes

main()
{
    int i, n;
    printf("SISTEMA DE FACTURACIÓN DE CLIENTES\n\n");
    printf("¿Cuantos clientes hay?: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        leerentrada(i);

        //Determinar el estado de la cuenta
        if (cliente[i].pago > 0)
            cliente[i].tipo_cuenta = (cliente[i].pago < 0.1 * cliente[i].anteriorsaldo) ? 'R' : 'A';
        else
            cliente[i].tipo_cuenta = (cliente[i].anteriorsaldo > 0) ? 'D' : 'A';
        //Ajustar saldo de la cuenta
        cliente[i].nuevosaldo = cliente[i].anteriorsaldo - cliente[i].pago;
    }

    for (i = 0; i < n; ++i)
        escribirsalida(i);
}

void leerentrada(int i)
//leer datos de entrada y actualizar el registro para cada cliente
{
    printf("\nCliente No. %d\n", i + 1);
    printf("    Nombre:   ");
    scanf(" %[^\n]", cliente[i].nombre);
    printf("    Calle:   ");
    scanf(" %[^\n]", cliente[i].calle);
    printf("    Ciudad:   ");
    scanf(" %[^\n]", cliente[i].ciudad);
    printf("    Numero de cuenta:   ");
    scanf("%d", &cliente[i].no_cuenta);
    printf("    Saldo anterior:   ");
    scanf("%f", &cliente[i].anteriorsaldo);
    printf("    Pago actual:   ");
    scanf("%f", &cliente[i].pago);
    printf("    Fecha de pago (mm/dd/aaaa):   ");
    scanf("%d/%d/%d", &cliente[i].ultimopago.mes,
          &cliente[i].ultimopago.dia,
          &cliente[i].ultimopago.anio);

    return;
}

void escribirsalida(int i)
//escribir la información actual para cada cliente
{
    printf("\nNombre: %s", cliente[i].nombre);
    printf("    Número de cuenta: %d\n", cliente[i].no_cuenta);
    printf("Ciudad: %s\n\n", cliente[i].calle);
    printf("Calle: %s\n", cliente[i].ciudad);
    printf("Saldo anterior: %7.2f", cliente[i].anteriorsaldo);
    printf("    Pago Actual: %7.2f", cliente[i].pago);
    printf("    Pago Actual: %7.2f", cliente[i].nuevosaldo);
    printf("Estado de cuenta: ");

    switch (cliente[i].tipo_cuenta)
    {
    case 'A':
        printf("AL DIA\n\n");
        break;
    case 'B':
        printf("RETRASADO\n\n");
        break;
    case 'c':
        printf("DELICUENTE\n\n");
    }
    return;
}

/**********PASO DE ESTRUCTURAS A UNA FUNCIÓN******************/

/*Encontrar un registro de cliente que corresponda a un número de cuenta especifico*/

#include <stdio.h>

#define N 3
#define NULL 0

typedef struct
{
    char *nombre;
    int no_cuenta;
    char tipo_cuenta;
    float saldo;
} registro;

registro *buscar(registro[], int ncuenta); //prorotipo de función buaca el registro de información con la variable entera cuenta

main()
{
    static registro cliente[N] = {
        {"Lazaro", 3333, 'A', 33.33},
        {"Jose", 6666, 'R', 66.66},
        {"Rafel", 9999, 'D', 99.99},
    }; //Formación de estructuras

    int ncuenta;  //declaración de variable
    registro *pt; //declaración de puntero

    printf("Localizador de cuenta cliente\n");
    printf("Para FIN, introducir 0 para el número de cuenta\n");
    printf("\nCuenta No.: "); //Introducir primer número de cuenta
    scanf("%d", &ncuenta);

    while (ncuenta != 0)
    {
        pt = buscar(cliente, ncuenta);

        if (pt != NULL)
        { //se encontró una coincidena
            printf("_______________________________________");
            printf("\nNombre: %s\n", pt->nombre);
            printf("\nCuenta No.: %d\n", pt->no_cuenta);
            printf("\nTipo de cuenta: %c\n", pt->tipo_cuenta);
            printf("\nSaldo: %.2f\n", pt->saldo);
            printf("_______________________________________\n");
        }
        else
            printf("\nERROR - Por favor pruebe de nuevo\n");

        printf("\nCuenta No.: "); //introducir siguiente número de cuenta

        scanf("%d", &ncuenta);
    }
}

registro *buscar(registro tabla[N], int ncuenta) //definición de la función
/*Acepta una formación de estructuras y un número de cuenta , devuelve un puntero a una estructura particular
(un elemento de la formación) si el número de cuenta coincide con un elemento de la formación*/
{
    int cont;

    for (cont = 0; cont < N; ++cont)
        if (tabla[cont].no_cuenta == ncuenta) //encontrada una coincidencia

            return (&tabla[cont]); //devuelve un puntero al elemento de formación

    return (NULL);
}