//7. Crie uma fun��o que receba como par�metro um array e o imprima. N�o utilize  �ndices para percorrer o array, apenas aritmetica de ponteiros.

#include <stdio.h>
#define TAM 5

void imprimirVetor(int *array);

int main(){
	int vetor[]={5,4,1,3,2};
	int i;
	
	imprimirVetor(vetor);
	
	return 0;
}

void imprimirVetor(int *array){
	int i;
	for(i=0; i<TAM; i++){
		printf("%i", *array);
		array++;
	}
}
