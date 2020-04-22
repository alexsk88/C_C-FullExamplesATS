
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;



int main(){


    int myints[] = {16,2,77,29,32,5,3,14};

    for (int i = 0; i < sizeof(myints); i++)
    {
        cout << "HOLA" << i << "\n";
    }

    return 0;
}