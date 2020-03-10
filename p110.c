#include <stdio.h>
#include <stdlib.h>

struct Tclient{
    char nombre[100];
	char adreca[100];
	int lect_ant, codi_client, zona;
    
};

int existeix_client(struct Tclient clientes[], int cod_cli){
	int i=0;
	
	for(i=0;i<29;i++){
		if(clientes[i].codi_client==cod_cli){
			return 1;
		}
	}
	return 0;
}

struct Tclient  mostrar_dades_client(struct Tclient cliente){
	int precio=0;
	printf("\nNombre: %s",cliente.nombre);
	printf("\nDireccion: %s",cliente.adreca);
	//printf("\nElectricidad consumida: %d",cliente.lect_ant);
	switch(cliente.zona){
		case 1: precio=7*cliente.lect_ant+6;
				break;
		case 2: precio=7*cliente.lect_ant+7;
				break;
		case 3: precio=7*cliente.lect_ant+8;
				break;
	}
	printf("\nImporte: %d",cliente.lect_ant*precio);
	return cliente;
}

struct Tclient  generar_factura(struct Tclient cliente, int lect){
	//printf("\nNombre: %s \tDireccion: %s \tLectura anterior: %d \tCodigo Cliente: %d",*cliente.nombre, *cliente.adreca, lect-(*cliente.lect_ant), *cliente.codi_client);
	//printf("\nNombre: %s ",cliente.nombre);
	printf("\nLectura actual: %d ",lect);
	printf("\nLectura anterior: %d ",cliente.lect_ant);
	printf("\nkwh consumidos: %d ",lect-cliente.lect_ant);
	cliente.lect_ant=lect-cliente.lect_ant;
	mostrar_dades_client(cliente);
	return cliente;
}

int main(){
	int cod_cli=0, lec_act=0, existe=0, i=0;
	struct Tclient clientes[29]=  {{"Abos Luque, Carlos  ","Calle A",0,1,1},
                            {"Aguilar Carmona, Oriol","Calle B",0,2,2},
                            {"Auladell Sanchez, Eduard","Calle C",0,3,3},
                            {"Caballero Buitrago, Nicolas","Calle D",0,4,1},
                            {"Castellsagues Nogueras, Nil","Calle E",0,5,2},
                            {"Clemente Garcia, German","Calle F",0,6,3},
                            {"Dorado Navarro, Ruben","Calle G",0,7,1},
                            {"el Marrakchi Bouacha, Abdellah","Calle H",0,8,2},
                            {"Gallego Martin, Marc","Calle I",0,9,3},
                            {"Garcia Gonzalez, Gerard ","Calle J",0,10,1},
                            {"Guillen Pujol, Daniel","Calle K",0,11,2},
                            {"Guisado Parras, Aitor","Calle L",0,12,3},
                            {"Jumilla Rodriguez, Adrian","Calle M",0,13,1},
                            {"Jumilla Rodriguez, Sergio","Calle N",0,14,2},
                            {"Lopez Morales, Marc ","Calle O",0,15,3},
                            {"Lopez Rodriguez, Daniel","Calle P",0,16,1},
                            {"Moreno Muñoz, David","Calle Q",0,17,2},
                            {"Muñoz Cano, Francisco","Calle R",0,18,3},
                            {"Nadales Hernandez, Airam","Calle S",0,19,1},
                            {"Perez Callejo, Raul","Calle T",0,20,2},
                            {"Perugachi Perugachi, Daky Andri","Calle U",0,21,3},
                            {"Pinyol Vilamitjana, Roger","Calle V",0,22,1},
                            {"Rea Vaca, Oscar","Calle W",0,23,2},
                            {"Ruiz Gomez, Francisco Daniel","Calle X",0,24,3},
                            {"Saavedra Quesada, Marcelino","Calle Y",0,25,1},
                            {"Sanchez Carreira, Adrian","Calle Z",0,26,2},
                            {"Torres Soriano, Alejandro","Calle AB",0,27,3},
                            {"Vila Martin, Gerard ","Calle CD",0,28,1},
                            {"Okoh, Stanley","Calle EF",0,29,2}};
    
    printf("Introduce codigo cliente (1-29): ");
    scanf("%d",&cod_cli);
    printf("Introduce lectura actual: ");
    scanf("%d",&lec_act);
    
    if((existeix_client(clientes,cod_cli))!=0){
    	
    	clientes[cod_cli]=generar_factura(clientes[cod_cli], lec_act);
    	//printf("\n%s %d",clientes[cod_cli].nombre,clientes[cod_cli].lect_ant);
	} 
	else{
		printf("\nEl cliente %d no existe", cod_cli);
	}
}
