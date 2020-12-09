/*2) Faça uma função que receba um valor n e crie dinamicamente um vetor de n elementos e retorne um ponteiro. 
Crie uma função que receba um ponteiro para um vetor e um valor n e imprima os n elementos desse vetor. 
Construa também uma função que receba um ponteiro para um vetor e libere esta área de memória. 
Ao final, crie uma função principal que leia um valor n e chame a função criada acima. 
Depois, a função principal deve ler os n elementos desse vetor. 
Então, a função principal deve chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a memória alocada através da função criada para liberação.*/

#include <stdio.h>
#include <stdlib.h>

int criarVetor(int n);
void printVet(int *p, int n);
void freePtr(int *p);


int main(){
	int i, num;
	
	printf("Informe o numero de elementos a serem alocados dinamicamente: ");
	scanf("%i", &num);
	
	//chamando a funcao que cria dinamicamente o vetor e retorna um ponteiro
	int *ptr = criarVetor(num);
	
	//lendo os elementos do vetor e armazenando nos enderecos de memoria alocada
	for(i=0; i < num; i++){
		printf("Digite o valor %i: ", i+1);
		scanf("%i", &ptr[i]);
	}
	
	//chamando a funcao que imprime o vetor
	printVet(ptr, num);
	
	//chamando a funcao que libera a memoria alocada
	freePtr(ptr);
	
	return 0;
}

//essa funcao cria dinamicamente um vetor e retorna o ponteiro com os enderecos de memoria alocada
int criarVetor(int n){
	int *p;
	p = (int *) malloc(n * sizeof(int));

}

//essa funcao recebe um ponteiro e imprime os valores (vetor) contidos nele
void printVet(int *p, int n){
	int i;
	printf("Vetor: ");
	for(i=0; i< n; i++){
		printf("%i ", p[i]);
	}
	
}

//essa funcao recebe um ponteiro e libera a memoria alocada dos enderecos contidos nele
void freePtr(int *p){
	free(p);
	printf("\n\nMemoria liberada!");
}
