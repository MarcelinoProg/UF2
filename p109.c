#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llegir_notes();
void calculs(int notes[]);

int main(){
	llegir_notes();
}

//Funcion calculs()
void calculs(int notes[]){
	int i, aprovats=0, suspesos=0, sufi=0, be=0, notable=0, excelent=0;
	for (i=0;i<40;i++){
		switch(notes[i]){
			case 0:
			case 1:	
			case 2:
			case 3:
			case 4:	suspesos=suspesos+1;
					break;
			case 5:	aprovats=aprovats+1;
					sufi=sufi+1;
					break;
			case 6:	aprovats=aprovats+1;
					be=be+1;
					break;
			case 7:
			case 8:	aprovats=aprovats+1;
					notable=notable+1;
					break;
			case 9:
			case 10:aprovats=aprovats+1;
					excelent=excelent+1;
					break;	
		}
		
	}
	printf("\nAprovats: %d\tSuspesos: %d",aprovats, suspesos);
	printf("\nSuficient: %d\tBe: %d\tNotable: %d\tExcelent: %d",sufi, be, notable, excelent);
}

//Funcion llegir_notes()
void llegir_notes(){
	int notes[40];
	int i;
	srand(time(NULL));
	for (i=0;i<40;i++){
		notes[i]=rand()%11;
		printf("\nNota %d: %d",i+1,notes[i]);
	}
	calculs(notes);
}
