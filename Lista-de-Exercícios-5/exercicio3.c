//3. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.

#include <stdio.h>
#define TAM 5

int main(){
	int V[TAM], i, *ptr;
	
	for(i=0; i<TAM; i++){
		printf("Insira um numero: ");
		scanf("%i", &V[i]);
	}
	printf("\n");
	ptr = V;
	
	for(i=0; i<TAM; i++){
		if((V[i]) % 2 == 0 )
			printf("%d\n", ptr);
		ptr++;
	}
	
	return 0;
}
