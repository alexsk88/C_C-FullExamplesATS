//1.2. El usuario ingrese 10 numeros enteros, se organicen de menor a mayor, me imprimir la posicion, 
//dato y direccion de los datos enteros impares.
#include <stdio.h>
#include<iostream>

using namespace std;
char nums[10];
char orden[10];
int i; 

void llenar()
{
	for (int j=0; j<=10; j++)
	{	
		cout<<"Digite numero ["<<j<<"]" <<": \n";
		cin>>nums[j];
	}
}
void organizarmenormayor()
{
	int temp;
	// Metod
	for(int i=0; i<10; i++) {
     for (int j=i+1; j<10; j++) {
        if(nums[j]<nums[i]) {
            temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            if(nums[i]%2 != 0)
            {
            	cout<<"NUMERO numero ["<<j<<"]" <<": "<<nums[i];
            	cout<<" Memoria-> "<<&nums[i]<< "\n";
			}
        }
     }
  }
}

void imprimir()
{
	for (int j=0; j<=10; j++)
	{	
		cout<<"NUMERO numero ["<<j<<"]" <<": "<<nums[j]<< "\n";
	}
}

int main()
{	
	llenar();
	organizarmenormayor();
}
