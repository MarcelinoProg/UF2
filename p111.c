#include <stdio.h>
#include <stdlib.h>

struct Tlibro{
		int ISBN;
		char titol[100];
		char autor[100];
		char editorial[100];
		int ano_edic;
};
struct Tlibro alta_libro(struct Tlibro libro[], int *cont){
	int conta=*cont;
	if(conta<100){
		libro[conta].ISBN=conta;
		printf("\nIntorduce titulo: ");
		scanf("%s",libro[conta].titol);
		printf("\nIntorduce autor: ");
		scanf("%s",libro[conta].autor);
		printf("\nIntorduce editorial: ");
		scanf("%s",libro[conta].editorial);
		printf("\nIntorduce año edicion: ");
		scanf("%d",&libro[conta].ano_edic);
		//printf("\n%d %s", libro[conta].ISBN, libro[conta].titol);
		*cont=conta+1;
		//printf("\ncontador: %d",*cont);
	}
}
struct Tlibro lista_libro(struct Tlibro libro[], int *cont){
	int i, conta=*cont;
	if(conta>0){
		for(i=0;i<conta;i++){
			printf("\nISBN: %d",libro[i].ISBN);
			printf("\nTitulo: %s",libro[i].titol);
			printf("\nAutor: %s",libro[i].autor);
			printf("\nEditorial: %s",libro[i].editorial);
			printf("\nAño edicion: %d",libro[i].ano_edic);
		}
	}
	else{
		printf("\nNo hay libros que listar");
	}
}

int menu(){
	int opcion=0;
	//system("cls");
	printf("\nEscoge una opcion: ");
	printf("\nPulsa 1 para dar de alta un libro. ");
	printf("\nPulsa 2 para listar los libros existentes. ");
	printf("\nPulsa cualquier tecla para SALIR. ");
	printf("\nOpcion escogida: ");
	scanf("%d",&opcion);
	if(opcion!=1 && opcion!=2){
		printf("\nHas escogido salir del programa. See you soon!!!");
		return(3);
	}
	
	return(opcion);
}


int main(){
	struct Tlibro libro[100];
	int cont=0;
	int salida=1;
	do{
		switch(menu()){
			case 1: alta_libro(libro,&cont);
					break;
			case 2: 	
					lista_libro(libro,&cont);
					break;
			case 3: 	
					salida=0;
					break;
		}
	}while(salida!=0);
}
