//Alocacao Dinamica de memória - 16/11
//Vetor, matriz --> alocacao estatica
//Alocacao dinamica --> durante a executacao posso alocar memoria e liberar a memoria alocada
#include <stdio.h>
#include <stdlib.h>

void recebe(int *p, int tamanho);

int main(){
	
	int *ptr, tamanho, i, j;

	for(j=0; j < 1000; j++){
		printf("Digite o tamanho de inteiros a serem alocados dinamicamente: ");
		scanf("%i", &tamanho);
		ptr = (int *) malloc(tamanho * sizeof(int));

 		if(!ptr){
			printf("Erro na alocacao!");

			return -1;
		}

		else{
			printf("Sucesso!");
		}

		recebe(ptr, tamanho);
		
		for(i=0; i < tamanho; i++){
			printf("\nVoce digitou = %i", ptr[i]);
		}

 		printf("\nLibera memoria!\n");
		free(ptr); //esse comando nem sempre eh necessario mas eh uma boa pratica utilizar para evitar bugs la na frente
	}


 	return 0;
}


void recebe(int *p, int tamanho){
	int i;
	for(i=0; i < tamanho; i++){
		printf("\nDigite um valor: ");
		scanf("%i", &p[i]);
	}
}
