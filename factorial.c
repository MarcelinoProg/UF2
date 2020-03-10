#include <stdio.h>

int factorial(int n){
	if(n==1)
		return 1;
	return n*factorial(n-1);
	
}
int main(){
	int num, fact;
	do{
		printf("\nIntroduce un numero para calcular factorial o 0 para salir: ");
		scanf("%d",&num);
		if(num==0)
			break;
		fact=factorial(num);
		printf("El factorial de %d es %d", num, fact);
	}while(num!=0);
	
}


