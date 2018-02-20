#include<stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int  openFile(FILE *arq){
	int open;
	if(arq == NULL) { // teste para validar a abertura do arquivo feita de forma incorreta
		printf("\nErro ao abrir o arquivo!");
		return open=0;
    }
	
	else{
		return open=1;
	}	
	
}
