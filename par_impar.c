#include<stdio.h>
#include<string.h>

int par_impar (int num){
	if(num==0)
		return 0;
	if(num==1)
		return 1;
	return par_impar(num-2);
}
int main(){
	int espar,i,num;
	char salida[10];
	do{
		printf("\nIntroduce numero par/impar o 0 para salir: ");
		scanf("%d",&num);

		if(num==0)
			break;
		espar=par_impar(num);
		if(espar==0)
			strcpy(salida,"par");
		if(espar==1)
			strcpy(salida,"impar");
		printf("el numero %d es %s ",num, salida);
	}while(num!=0);
	
}
