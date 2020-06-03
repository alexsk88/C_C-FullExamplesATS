#include <stdio.h>
#include <math.h>

// Variables 
float sxy = 0.0, sx= 0.0, sy= 0.0, sx2= 0.0, sy2= 0.0;
float a=0.0, b=0.0;

float sye=0.0; // Suma de y estimado
float scr= 0.0; // suma de cuadrados de la regresion
float sct= 0.0; // suma de cuadrados de la t jaajja
float ymedia = 0.0;
float regresion = 0.0;

FILE *archivo;

struct recta
{
	float x;
	float y;
};	
	
recta task[4];

void llenar()
{	
//	 Valores de X
	printf("VALORES DE X \n\n");
	for(int m=0;m<10;m++)
	{
		printf("Ingrese X[%d]: ", m);
		scanf("%f", &task[m].x);
	}
	// Valores de Y
	printf("\n\n VALORES DE Y \n\n");
	for(int t=0;t<10;t++)
	{
		printf("Ingrese Y[%d]: ", t);
		scanf("%f", &task[t].y);
	}


//	task[0].x = 2;
//	task[1].x = 6;
//	task[2].x = 8;
//	task[3].x = 8;
//	
//	task[0].y = 58;
//	task[1].y = 105;
//	task[2].y = 88;
//	task[3].y = 118;
}

void sumatorias()
{
	for(int i=0;i<10;i++)
	{
		sx+=task[i].x; // SUMATORIAS DE X
		sy+=task[i].y; // SUMATORIAS DE Y
		sx2+=task[i].x*task[i].x; // SUMATORIAS DE X A LA 2
		sy2+=task[i].y*task[i].y; // SUMATORIAS DE Y A LA 2
        sxy+=task[i].x*task[i].y; //SUMATORIAS DE X POR Y
	}
}
void hallar_ymedia()
{
	for(int y=0;y<10;y++)
	{
		ymedia+= task[y].y;
	}
	
	ymedia = ymedia/10;
}
 
void valores_a_b()
{
	b=((4*sxy)-(sx*sy))/((10*sx2) -(sx*sx));
	
	a= (sy-(b*sx))/10;
}


//void sumatoriayestimado()
//{
//	for(int m=0; m<4;m++)
//	{
//		sye+= a + (b*taks[i].x);
//	}
//}
 
void suma_sct()
{
	float sum = 0; 
	for(int s=0; s<10;s++)
	{
		sum = task[s].y - ymedia;
//		printf("%f - %f = %f\n ---> %f",task[s].y, ymedia ,sum, pow(sum,2)); 
		sct+= pow(sum , 2);
		sum = 0;
	}
}

void suma_scr()
{
	for(int s=0; s<10;s++)
	{
		scr+= pow( ((a + (b* task[s].x))- ymedia),2);
	}
}

void hacer_regresion()
{	
	regresion = scr/sct;
	regresion = sqrt(regresion);	
}
 
 
void llenartxt()
{
	archivo = (fopen("data.txt", "w"));
	
	fprintf(archivo,"VALORES DE X \n");
	fprintf(archivo,"____________\n\n");
	
	for(int i = 0; i < 10; ++i)
	{
		fprintf(archivo,"%0.f\n",task[i].x);
	}
	
	fprintf(archivo,"\n\nVALORES DE Y \n");
	fprintf(archivo,"______________\n\n");
	for(int i = 0; i < 10; ++i)
	{
		fprintf(archivo,"%1.f\n",task[i].y);
	}
	
	fprintf(archivo,"\n\nCalculos \n");
	fprintf(archivo,"______________\n\n");
	fprintf(archivo,"Sumatoria de X = %1.f\n",sx);
	fprintf(archivo,"Sumatoria de Y = %1.f\n",sy);
	fprintf(archivo,"Sumatoria de XY = %1.f\n",sxy);
	fprintf(archivo,"Sumatoria de X^2 = %1.f\n",sx2);
	fprintf(archivo,"Sumatoria de Y^2 = %1.f\n",sy2);
	fprintf(archivo,"Sumatoria de XY = %1.f\n",sxy);
	fprintf(archivo,"Promedio de Y = %2.f\n",ymedia);
	fprintf(archivo,"Valor de a = %2.f \n",a);
	fprintf(archivo,"Valor de b = %2.f \n",b);
	fprintf(archivo,"Ecuacion de la Regresion:  Y = %2.f + %2.fx\n",a,b);
	fprintf(archivo,"Regresion Lineal = %f \n",regresion);
	
	
	fclose(archivo);
}
int main()
{
    llenar();
    sumatorias();
    valores_a_b();
    hallar_ymedia();
	//sumatoriayestimado();
	suma_scr();
	suma_sct();
	hacer_regresion();
    
    llenartxt();
//	printf("ymedia = %f \n",ymedia );
//    printf("a = %f \n", a);
//    printf("b = %f \n", b);
//    printf("scr = %f \n",scr );
//    printf("sct = %f \n",sct );
//    printf("regresion %f ", regresion );

// PASAR A TXT LA DATA


    
    return 0;
    
}