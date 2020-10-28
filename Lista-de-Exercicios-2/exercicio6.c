/*6. Faça um programa que leia o tamanho de um vetor A e, em seguida, leia os n elementos do vetor. Considere qu6e o valor máximo de elementos que o 
vetor A pode armazenar é 100. Por fim, calcule e mostre a média dos elementos de índice par e o produto dos elementos de índice ímpar. */
#include <stdio.h>
#define TAM 100

int main(){

	int A[TAM], n, i, totalPar;
	float mediaPar, produtoImpar, somaPar;
	
	//Entrada
	printf("Digite a quantidade de elementos que serao lidos: (1-100): ");
	scanf("%i", &n);

	for (i=0; i < n ; i++){
		printf("Digite um valor: ");
		scanf("%i", &A[i]);
	}
	
	//Processamento
	totalPar = 0;
	somaPar = 0;
	produtoImpar = 1;

	for(i=0; i< n; i++){
		//Verifica se indice e par
		if(i %2 == 0){
			totalPar++;
			somaPar = somaPar + A[i];
		}
		
		else{
			//Indice e impar
			produtoImpar *= A[i];
		} 
	}
	
	mediaPar = somaPar / totalPar;
	
	printf("A media dos elementos de indices pares e: %f", mediaPar);
	
	if(n>1){
		printf("\nO produto dos indices impares e: %f", produtoImpar);
	}
	else{
		printf("\nProduto dos indices impares nao existe - vetor de tamanho = 1 ");
	}
	
	return 0;
}
