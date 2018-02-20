#include<stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


void writeFile(int *v, int colunas){
	FILE *arqout;
	int i;
	arqout = fopen("ouput.txt","wt");
	if (arqout == NULL){ // teste para validar a criação do arquivo feita de forma errada
     		printf("Erro ao criar ou abrir arquivo de saida\n");
  	}
	else{	
		for(i=0;i<colunas;i++){
			fprintf(arqout,"%d ",v[i]);
		}
		fclose(arqout);
	}
	
}
