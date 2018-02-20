#include<stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


void heapsort(int *v, int tamanho){
    int i, aux;
    for(i=(tamanho-1)/2; i>=0; i--){    //Cria heap a partir dos dados
        criaheap(v, i, tamanho-1);      // chama a função cria heap
    }
    for(i=tamanho-1; i>=1; i--){
        aux = v[0];                 //pegar o maior elemento do heap
        v[0] = v[i];            //e colocar na sua posiçao correspondente 
        v[i] = aux;                 
        criaheap(v, 0, i-1);        // chama a função para reconstruir o heap
    }
}


int criaheap(int *v, int inicio, int fim){
    int aux = v[inicio];
    int j = 2*inicio+1;
    while(j <= fim){
        if(j<fim){
            if(v[j] < v[j+1]){   //analisa quem e o maior filho
                j = j+1;
            }
        }
        if(aux < v[j]){             //analisa se o filho e maior que o pai que caso seja verdade troca o filho com o pai
            v[inicio] = v[j];   
            inicio = j;                 
            j = 2*inicio+1;
        }
        else{
            j = fim + 1;
        }
    }
    v[inicio] = aux;               //antigo pai ocupa lugar do ultimo filho analisado
}
