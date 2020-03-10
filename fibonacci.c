#include<stdio.h>

int fibonacci(int n){
	if(n==0)
		return 0;
	else
		if(n==1)
			return 1;
		else
			return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int num, fibo;
	do{
		printf("\nIntroduce un numero para calcular fibonacci o 0 para salir: ");
		scanf("%d",&num);
		if(num==0)
			break;
		if(num==1)
			fibo=1;
		else	
			fibo=fibonacci(num-1)+fibonacci(num-2);
		printf("El fibonacci de %d es %d", num, fibo);
	}while(num!=0);
	
}
