#include<stdio.h>

int mult_vect (int v[], int  long_v){
	if(long_v==0)
		return v[long_v];
	else
		return v[long_v]*mult_vect(v,long_v-1);
}
int main(){
	int long_v,mult,i;
	do{
		printf("\nIntroduce longitud del vector o 0 para salir: ");
		scanf("%d",&long_v);
		int v[long_v];
		for(i=0;i<long_v;i++){
			printf("\nIntroduce valor %d vector: ",i+1);
			scanf("%d",&v[i]);
		}
		if(long_v==0)
			break;
		mult=mult_vect(v,long_v-1);
		printf("la multiplicacion vectorial es %d", mult);
	}while(long_v!=0);
	
}
