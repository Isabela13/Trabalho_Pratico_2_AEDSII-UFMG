#include<stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main(int argc, char *argv[]){
	int *v, colunas , j;
	FILE *arq;
	arq = fopen("input.txt","r");
	int x=openFile(arq); // x recebe o return da função openFile que se for 0 deu algum problema na leitura do arquivo 
	if (x==1){ // se x for igual a 1 nenhum problema na abertura e leitura de arquivo
		fscanf(arq,"%d",&colunas); //le a quantidade de colunas
		v = (int*) malloc(colunas*sizeof(int)); // aloca memoria dinamicamente para o velor v com a quantidade de colunas existente
		for(j=0;j<colunas;j++){ // le cada linha do arquivo e grava em uma posição do vetor v
			fscanf(arq,"%d",&v[j]);
		}
	}	
	fclose(arq); 
	heapsort(v,colunas); // chama a função para ordenar o vetor
	writeFile(v , colunas); // chama a função para escrever o vetor ordenado no arquivo de saida
	free(v);

}
