#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

void Datos();
int puntero1(char *);
int puntero2(char *);
int puntero3(char *);
int puntero4(char *);
	
char Frase[100];
	
	
int main(){	
	
	Datos();
	cout<< "el numero de vocales es: "<<puntero1(Frase)<<endl;
	cout<< "el numero de digitos es: "<<puntero2(Frase)<<endl;
	cout<< "el numero de espacios es: "<<puntero3(Frase)<<endl;
	cout<< "el numero de consonantes es: "<<puntero4(Frase)<<endl;
	
	getch();
	return 0;
}


	void Datos(){
		
		cout<<"Escriba la frase: ";
		cin.getline(Frase,100,'\n');
		
		strupr (Frase);
		
	}
	
	
	int puntero1(char *contf){
		
		int contV=0;
		
		while(*contf!='\0'){
			
			if (*contf=='A'||*contf=='E'||*contf=='I'||*contf=='O'||*contf=='U'){
				contV++;
			}
			contf++;
		}
		return contV;
	}
	
	
	int puntero2(char *contf){
		
		int contN=0;
		
		while(*contf!='\0'){
			
		 if(*contf=='0'||*contf=='1'||*contf=='2'||*contf=='3'||*contf=='4'||*contf=='5'||*contf=='6'||*contf=='7'||*contf=='8'||*contf=='9'){
				contN++;
			}
			contf++;
		}
		return contN;
		
	}
	
	
	int puntero3(char *contf){
		
		int contE=0;
			
		while(*contf!='\0'){
			
		 if(*contf==' '){
				contE++;
			}
			contf++;
			}
		return contE;
	}	
		

	int puntero4(char *contf){
		
		int contC=0;
			
		while(*contf!='\0'){
				
			if (*contf=='A'||*contf=='E'||*contf=='I'||*contf=='O'||*contf=='U'){
			}
			else if(*contf=='0'||*contf=='1'||*contf=='2'||*contf=='3'||*contf=='4'||*contf=='5'||*contf=='6'||*contf=='7'||*contf=='8'||*contf=='9'){
			}
			else if(*contf==' '){
			}
			else{
				contC++;
			}
			contf++;
		}
		return contC;
		
	}