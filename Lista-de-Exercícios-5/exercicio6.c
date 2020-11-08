/*6. Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do array. A função deverá preencher os elementos de array com esse valor. 
Não utilize  índices para percorrer o array, apenas aritmetica de ponteiros.
*/ 
#include <stdio.h>
#define TAM 5

void preencher(int *array, int valor);

int main(){
	int vetor[TAM];
	int i, num=9;
	
	preencher(vetor, num);
	
	for(i=0; i<TAM; i++)
		printf("%i", vetor[i]);
	
	return 0;
}

void preencher(int *array, int valor){
	int i;
	for(i=0; i<TAM; i++){
		*array = valor;
		array++;
	}
}
