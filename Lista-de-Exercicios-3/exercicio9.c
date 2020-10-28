/*Escreva uma função recursiva que dado um número n, gere todas as possíveis combinações com as n primeiras letras do alfabeto. 
Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA. */

#include <stdio.h>
#define TAM 26

char vetor[TAM];
int n;

void trocarPos(char vetor[], int i, int j );
void permutar(char vetor[], int i);

int main(){
	char c = 'A';
	int i;
	do{
		printf("Digite a quantidade de letras que voce deseja permutar:");
		scanf("%i", &n);
		if(n<1 || n>TAM)
			printf("Numero invalido!\n");
					
	}while (n<1 || n>TAM);
	
	for(i=0; i<n; i++)
		vetor[i] = c + i;
	
	permutar(vetor, 0);
	
	return 0;
}

void permutar(char vetor[], int i){
	if(i==n){
		int k;
		for (k = 0; k < n; k++){
			printf("%c", vetor[k]);
		}
		
		printf("\n");
	}
	
	else{
		int j;
		for(j=i; j<n; j++){
			trocarPos(vetor, i, j);
			permutar(vetor, i+1);
			trocarPos(vetor, i, j);
		}
	}
}

void trocarPos(char vetor[], int i, int j){
	char aux;
	aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}
