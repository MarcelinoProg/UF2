#include<stdio.h>

int restasuces (int a, int b){
	if(a<b)
		return 0;
	if(a==b)
		return 1;
	return 1+restasuces(a-b,b);
}
int main(){
	int num, div,a,b;
	do{
		printf("\nIntroduce un dividendo para calcular division o 0 para salir: ");
		scanf("%d",&a);
		printf("\nIntroduce un divisor para calcular division: ");
		scanf("%d",&b);
		if(a==0)
			break;
		div=restasuces(a,b);
		printf("la division de %d entre %d es %d", a,b,div);
	}while(a!=0 && b!=0);
	
}
