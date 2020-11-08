//2. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

#include <stdio.h>
#define TAM 5

int main(){
	int V[TAM], i, *ptr;
	
	for(i=0; i<TAM; i++){
		printf("Insira um numero: ");
		scanf("%i", &V[i]);
	}
	
	ptr = V;
	
	for(i=0; i<TAM; i++){
		printf("%d\n", *ptr++ *2);
	}
	
	return 0;
}
