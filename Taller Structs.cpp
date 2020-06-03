/*
Realizar la modificación del ejemplo del programa adjunto.
1. Delimitar la cantidad de clientes solo a 5.
2. Delimitar la cantidad de numeros enteros del numero de la cuenta (10 decimales)
3. Despues de actualizar el saldo (Sea por pago o transferencia), aperezca una lista de opciones:
"Desea realizar alguna otro operación bancaria"
1.Transferencia bancaria
2. Pago de factura
3. Salir
Si elige la opción 1 o 2, debe realizar la actualización de saldo actual nuevamente
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

void leerentrada(int i);
void escribirsalida(int i);
void data();
void menu();


struct fecha
{
    int mes;
    int dia;
    int anio;
};

struct cuenta
{
    char nombre[80];
    char calle[80];
    char ciudad[80];
    int no_cuenta;
    int tipo_cuenta;
    float anteriorsaldo;
    float nuevosaldo;
    float pago;
    struct fecha ultimopago;
} cliente[5]; // 1. DELIMITAR LOS CLIENTE A 5

main()
{
    int n = 5;
    printf("SISTEMA DE FACTURACION DE CLIENTES\n\n");

    // Profe siempre pongo data, para hacer tests rapidos
    data();

    for (int i = 0; i < n; ++i)
    {
        // leerentrada(i);
 
        if (cliente[i].pago > 0)
            cliente[i].tipo_cuenta =
                (cliente[i].pago < 0.1 * cliente[i].anteriorsaldo) ? 'R' : 'A';
        else
            cliente[i].tipo_cuenta =
                (cliente[i].anteriorsaldo > 0) ? 'D' : 'A';
     
        cliente[i].nuevosaldo = cliente[i].anteriorsaldo - cliente[i].pago;
    }

    for (int i = 0; i < n; ++i)
        escribirsalida(i);

    menu();

    getch();
}

// TERCER PUNTO AQUI
void menu()
{
        // MENU
    int opcion;
    printf("\n==========MENU=============");
    while (true)
    {
        int pos_cuenta;
        printf("\nSelecione POS cuenta\n");
        for (int i = 0; i < 5; ++i)
            printf("POS [%d] -> %s \n", i, cliente[i].nombre);

        scanf("%d", &pos_cuenta);

        printf("\n1.Transferencia bancaria\n2. Pago de factura\n3. Salir\n");
         scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\n Transferencia bancaria\n");
            float h;
            printf("\n DIGITE MONTO\n");
            scanf("%f", &h);

            cliente[pos_cuenta].nuevosaldo += h;
            escribirsalida(pos_cuenta); 
            h=0;
            break;
        case 2:
            printf("\n Pago de factura\n");
            float npago;
            printf("\n DIGITE MONTO\n");
            scanf("%f", &npago);

            cliente[pos_cuenta].pago = npago;
            // TOCA UPDATE pay DATE ??? 
            cliente[pos_cuenta].anteriorsaldo = cliente[pos_cuenta].nuevosaldo;
            cliente[pos_cuenta].nuevosaldo = cliente[pos_cuenta].anteriorsaldo - npago;
            escribirsalida(pos_cuenta); 
            npago =0;
            break;
        case 3:
            printf("\n Salir\n");
            return;
            break;

        default:
            printf("\nDigite una opcion valida\n");
        }
    }
}

void leerentrada(int i)
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
{
    printf("\n=====================================");
    printf("\nNombre: %s", cliente[i].nombre);

    // 2. Delimitar la cantidad de numeros enteros del numero de la cuenta (10 decimales)
    printf("\nNumero de cuenta: %10d", cliente[i].no_cuenta);

    printf("\nCiudad: %s", cliente[i].calle);
    printf("\nCalle: %s", cliente[i].ciudad);
    printf("\nSaldo anterior: %7.2f", cliente[i].anteriorsaldo);
    printf("\nPago Actual: %7.2f", cliente[i].pago);
    printf("\nNuevo Saldo Actual: %7.2f", cliente[i].nuevosaldo);
    printf("\nEstado de cuenta: ");

    switch (cliente[i].tipo_cuenta)
    {
    case 'A':
        printf("AL DIA\n\n");
        break;
    case 'R':
        printf("RETRASADO\n\n");
        break;
    case 'D':
        printf("DELICUENTE\n\n");
    }
    printf("=====================================\n");
    return;
}

void data()
{

    char n0[] = "Juan";
    strcpy(cliente[0].nombre, n0);
    char c0[] = "Calle 10";
    strcpy(cliente[0].calle, c0);
    char ca0[] = "Bogota";
    strcpy(cliente[0].ciudad, ca0);
    cliente[0].no_cuenta = 1;
    cliente[0].anteriorsaldo = 100000;
    cliente[0].pago = 10000;
    cliente[0].ultimopago.mes = 03;
    cliente[0].ultimopago.dia = 02;
    cliente[0].ultimopago.anio = 2020;

    char n1[] = "Paco";
    strcpy(cliente[1].nombre, n1);
    char c1[] = "Calle 11";
    strcpy(cliente[1].calle, c1);
    char ca1[] = "Bogota";
    strcpy(cliente[1].ciudad, ca1);
    cliente[1].no_cuenta = 2;
    cliente[1].anteriorsaldo = 100000;
    cliente[1].pago = 100;
    cliente[1].ultimopago.mes = 03;
    cliente[1].ultimopago.dia = 02;
    cliente[1].ultimopago.anio = 2020;

    char n2[] = "Pedro";
    strcpy(cliente[2].nombre, n2);
    char c2[] = "Calle 22";
    strcpy(cliente[2].calle, c2);
    char ca2[] = "Bogota";
    strcpy(cliente[2].ciudad, ca2);
    cliente[2].no_cuenta = 2;
    cliente[2].anteriorsaldo = 100000;
    cliente[2].pago = 200;
    cliente[2].ultimopago.mes = 03;
    cliente[2].ultimopago.dia = 02;
    cliente[2].ultimopago.anio = 2020;

    char n3[] = "Maria";
    strcpy(cliente[3].nombre, n3);
    char c3[] = "Calle 33";
    strcpy(cliente[3].calle, c3);
    char ca3[] = "Bogota";
    strcpy(cliente[3].ciudad, ca3);
    cliente[3].no_cuenta = 3;
    cliente[3].anteriorsaldo = 100000;
    cliente[3].pago = 40000;
    cliente[3].ultimopago.mes = 02;
    cliente[3].ultimopago.dia = 12;
    cliente[3].ultimopago.anio = 2020;

    char n4[] = "Sara";
    strcpy(cliente[4].nombre, n4);
    char c4[] = "Calle 44";
    strcpy(cliente[4].calle, c4);
    char ca4[] = "Bogota";
    strcpy(cliente[4].ciudad, ca4);
    cliente[4].no_cuenta = 4;
    cliente[4].anteriorsaldo = 100000;
    cliente[4].pago = 0;
    cliente[4].ultimopago.mes = 02;
    cliente[4].ultimopago.dia = 12;
    cliente[4].ultimopago.anio = 2020;
}