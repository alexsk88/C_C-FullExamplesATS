/* 3. Indique cuantas vocales hay. (Ejemplo: en la frase hay A=5,  E=8 etc)*/

#include<iostream>
#include<conio.h>
#include<string.h>

#include <clocale>

using namespace std;

void pedirDatos();
void contarVocales(char *);

char palabraUsuario[30];

int main(){
	setlocale(LC_CTYPE,"Spanish");
	pedirDatos();
	contarVocales(palabraUsuario);//Llamada a la funcion para contar vocales del nombre
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite una palabra: ";
	cin.getline(palabraUsuario,30,'\n');
	 _flushall();
	
	strupr(palabraUsuario); //pasar el nombre a mayuscula
}

void contarVocales(char *palabra){
	int contA=0,contE=0,contI=0,contO=0,contU=0 ,eje=0;
	
	while(*palabra){ //mientras nombre sea diferente de nulo '\0'
		switch(*palabra){
			case 'A': contA++;break;
			case 'E': contE++;break;
			case 'I': contI++;break;
			case 'O': contO++;break;
			case 'U': contU++;break;
			case  165: eje++;break;
			case  164: eje++;break;
		}
		palabra++;
	}
	
	//Imprimiendo el conteo de cada vocal
	cout<<"\nNumero de vocales A: "<<contA<<endl;
	cout<<"Numero de vocales E: "<<contE<<endl;
	cout<<"Numero de vocales I: "<<contI<<endl;
	cout<<"Numero de vocales O: "<<contO<<endl;
	cout<<"Numero de vocales U: "<<contU<<endl;
		cout<<"ñ: "<<eje<<endl;
}
