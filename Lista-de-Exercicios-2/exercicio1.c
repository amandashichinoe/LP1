//1. Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir os n�meros na ordem que foram recebidos.
#include <stdio.h>
#define TAM 10

int main(){
	int i, v[TAM];
	
	for(i=0; i<TAM; i++)
	{
		printf("Digite um valor: ");
		scanf("%i", &v[i]);
	}
	
	for(i=0; i<TAM; i++){
		printf("%i ", v[i]);
	}
	
	return 0;
}
