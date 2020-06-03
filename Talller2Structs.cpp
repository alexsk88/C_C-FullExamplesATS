/*
Realizar la modificación del ejemplo del programa adjunto.
1. Crear 10 usuarios DENTRO del programa, con la siguiente información:
-Nombre completo del usuario.
-Número de identificación del usuario.
-Número de la cuenta .
-Tipo de cuenta(Corriente y/o ahorros).
- Saldo.

Por medio de punteros deben realizar la busqueda 
de información del usuario, Usuario digita: Nombre y tipo de cuenta.
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include<iostream>
using namespace std; 

struct cuenta
{
    char full_nombre[80];
    int identificacion;
    int no_cuenta;
    char tipo_cuenta[80];
    float saldo;
} cliente[10], *p_cliente = cliente;  // UTILIZACION DEL PUNTEROO

void buscar(string n, string t)
{
    // cout<<"NAME recibido "<<n;
    // cout<<"Number "<<tipo;


  
    for (int i = 0; i < 10; i++)
    {
        // printf("%s == ",(p_cliente + i)->full_nombre);
        // cout<<n;
        // printf(" | %s == %s\n\n",(p_cliente + i)->tipo_cuenta, tipeStr);
        //  && (p_cliente + i)->tipo_cuenta == tipeStr

        
        if ((p_cliente + i)->full_nombre == n   && (p_cliente + i)->tipo_cuenta == t)
        {
            printf("\nLO HEMOS ENCONTRADO !!\n");
            printf("___________________________________\n");
            printf("NOMBRE: %s\n", (p_cliente + i)->full_nombre);
            printf("TIPO CUENTA: %s \n", (p_cliente + i)->tipo_cuenta);
            printf("No_CUENTA: %d \n", (p_cliente + i)->no_cuenta);
            printf("IDENTEFICACION: %d\n", (p_cliente + i)->identificacion);
            printf("SALDO: %f\n", (p_cliente + i)->saldo);
            printf("___________________________________\n");
            break;

        }
        else if (i == 9)
        {
            printf("Lo siento tu busqueda no Coincide con nada :(\n");
        }
    }
}

void data()
{
    strcpy((p_cliente + 0)->full_nombre, "Lola Hernandez");
    (p_cliente + 0)->identificacion= 1072123;
    (p_cliente + 0)->no_cuenta= 11;
    strcpy((p_cliente + 0)->tipo_cuenta, "AHORROS");
    (p_cliente + 0)->saldo= 121000;

    strcpy((p_cliente + 1)->full_nombre, "Martha Milano");
    (p_cliente + 1)->identificacion= 1072554;
    (p_cliente + 1)->no_cuenta= 21;
    strcpy((p_cliente + 1)->tipo_cuenta, "AHORROS");
    (p_cliente + 1)->saldo= 520320;

    strcpy((p_cliente + 2)->full_nombre, "Jaime Rodriguez");
    (p_cliente + 2)->identificacion= 1073210;
    (p_cliente + 2)->no_cuenta= 31;
    strcpy((p_cliente + 2)->tipo_cuenta, "AHORROS");
    (p_cliente + 2)->saldo= 1520000;

    strcpy((p_cliente + 3)->full_nombre, "Tito Nova");
    (p_cliente + 3)->identificacion= 1075676;
    (p_cliente + 3)->no_cuenta= 40;
    strcpy((p_cliente + 3)->tipo_cuenta, "AHORROS");
    (p_cliente + 3)->saldo= 9999999999999;

    strcpy((p_cliente + 4)->full_nombre, "Sasha Arevalo");
    (p_cliente + 4)->identificacion= 10751362;
    (p_cliente + 4)->no_cuenta= 51;
    strcpy((p_cliente + 4)->tipo_cuenta, "CORRIENTE");
    (p_cliente + 4)->saldo= 12300200;

    strcpy((p_cliente + 5)->full_nombre, "Alejandra Mint");
    (p_cliente + 5)->identificacion=1075210;
    (p_cliente + 5)->no_cuenta= 56;
    strcpy((p_cliente + 5)->tipo_cuenta, "CORRIENTE");
    (p_cliente + 5)->saldo= 154320100;

    strcpy((p_cliente + 6)->full_nombre, "Keylor Navas");
    (p_cliente + 6)->identificacion= 1075999;
    (p_cliente + 6)->no_cuenta= 66;
    strcpy((p_cliente + 6)->tipo_cuenta, "CORRIENTE");
    (p_cliente + 6)->saldo= 30210500;

    strcpy((p_cliente + 7)->full_nombre, "Cristiano Ronaldo");
    (p_cliente + 7)->identificacion= 3021514;
    (p_cliente + 7)->no_cuenta= 77;
    strcpy((p_cliente + 7)->tipo_cuenta, "CORRIENTE");
    (p_cliente + 7)->saldo= 999523999;

    strcpy((p_cliente + 7)->full_nombre, "Yuri Pachon");
    (p_cliente + 7)->identificacion= 1202546;
    (p_cliente + 7)->no_cuenta= 87;
    strcpy((p_cliente + 7)->tipo_cuenta, "CORRIENTE");
    (p_cliente + 7)->saldo= 32000251;

    strcpy((p_cliente + 8)->full_nombre, "Camilo Karnas");
    (p_cliente + 8)->identificacion= 2365511;
    (p_cliente + 8)->no_cuenta= 97;
    strcpy((p_cliente + 8)->tipo_cuenta, "AHORROS");
    (p_cliente + 8)->saldo= 99523035;

    strcpy((p_cliente + 9)->full_nombre, "Kiara  Matul");
    (p_cliente + 9)->identificacion= 9655884;
    (p_cliente + 9)->no_cuenta= 101;
    strcpy((p_cliente + 9)->tipo_cuenta, "AHORROS");
    (p_cliente + 9)->saldo= 12300500;
}

// _________________ MAIN PRINCIPAL __________________________
main()
{
    string nombre;
    string tipo;
    bool flag = true;
    // 1. Crear 10 usuarios dentro del programa
    data();

    // BUSCAR
    while (flag)
    {
        printf("\n\n********* BUSCAR *********\n");
        printf("DIGITE Nombre Completo:");
        getline(cin, nombre); 
        // cout << "/* TU NAME ES */" << nombre;
        fflush(stdin); 
        printf("ESCRIBIR EN MAYUSCULA\n");
        printf("DIGITE titpo de cuenta \n AHORROS / CORRIENTE\n");
        getline(cin, tipo); 
        // cout << "/* TU NAME ES */" << nombre;
        fflush(stdin); 
        buscar(nombre, tipo);
    }

    getch();
}
