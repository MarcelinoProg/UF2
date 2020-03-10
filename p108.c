#include <stdio.h>
#include <stdlib.h>

int menu();
void rectangulo(int b, int h);
void triangulo(int b, int h);
void cilindro(int r, int h);

int main(){
	int salida=0;
	do{
		salida=menu();
		
	}while(salida==0);
	
}

//Función Menu -->Llama a las funciones rectangulo(), triangulo(), cilindro()
int menu(){
	int opcion=0, b=0, h=0, r=0;
	system("cls");
	printf("\nEscoge la figura de la cual quireres calcular el area: ");
	printf("\nPulsa 1 para Rectangulo. ");
	printf("\nPulsa 2 para Triangulo. ");
	printf("\nPulsa 3 para Cilindro. ");
	printf("\nPulsa cualquier tecla para SALIR. ");
	printf("\nOpcion escogida: ");
	scanf("%d",&opcion);
	if(opcion!=1 && opcion!=2 && opcion!=3){
		printf("\nHas escogido salir del programa. See you soon!!!");
		return(1);
	}
	switch(opcion){
		case 1: 	
					printf("\nDame la base: ");
					scanf("%d",&b);	
					printf("Dame la altura: ");
					scanf("%d",&h);	
					rectangulo(b,h);
					break;
		case 2: 	
					printf("\nDame la base: ");
					scanf("%d",&b);	
					printf("Dame la altura: ");
					scanf("%d",&h);	
					triangulo(b,h);
					break;
		case 3: 	
					printf("\nDame el radio: ");
					scanf("%d",&r);	
					printf("Dame la altura: ");
					scanf("%d",&h);	
					cilindro(r,h);
					break;
	}
	return(0);
}

//Funcion rectangulo
void rectangulo(int b, int h){
	int area=0;
	area=b*h;
	printf("Area rectangulo: %d\n", area);
	system("PAUSE");	
}

//Funcion triangulo
void triangulo(int b, int h){
	int area=0;
	area=(b*h)/2;
	printf("Area triangulo: %d\n", area);
	system("PAUSE");	
}

//Funcion cilindro
void cilindro(int r, int h){
	float area=0;
	area=2*3.1416*r*(r+h);
	printf("Area cilindro: %.2f\n", area);
	system("PAUSE");	
}
