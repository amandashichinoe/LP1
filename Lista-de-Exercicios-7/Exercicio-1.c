/* Exercicio 1 - Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos e passe esse vetor para uma função que vai ler os elementos desse vetor. 
Depois, no programa principal, o vetor preenchido deve ser impresso. 
Além disso, antes de finalizar o programa, deve-se liberar a área de memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *p, int n);

int main()
{
	int *ptr, tamanho, i, j;



	//recebendo o valor n
	printf("Digite a quantidade de inteiros a serem alocados dinamicamente: ");
	scanf("%i", &tamanho);
	
	//alocando dinamicamente a memoria
	ptr = (int *) malloc(tamanho * sizeof(int));

	if(!ptr){
		printf("Erro na alocacao!");
		return 0;
	}
	else{
		printf("Memoria alocada com sucesso!\n\n");
	}

	//chamando funcao que le os elementos do vetor
	lerVetor(ptr, tamanho);
	
	// imprimindo vetor
	printf("\nO vetor informado foi: ");
	for(i=0; i < tamanho; i++){
		printf("%i ", ptr[i]);
	}

	printf("\n\n");

	//liberando memoria
	printf("Memoria Liberada!");
	free(ptr);

	return 0;
}

//Ler n e criar dinamicamente um vetor de n elementos
void lerVetor(int *p, int n)
{
	int i;
	
	for(i=0; i < n; i++)
	{
		printf("Digite um valor: ");
		scanf("%i", &p[i]);
	}	
}

