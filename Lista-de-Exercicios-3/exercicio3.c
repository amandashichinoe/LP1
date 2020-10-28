//Crie um programa em C que receba um vetor de números reais com 100 elementos. Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.

#include <stdio.h>
#define TAM 100

void invertVetor(int V[], int i, int j);

int main(){
	int i;
	int V[TAM];
	
	for(i=0; i<TAM; i++){
		V[i]= i+1;
		printf("%i ", V[i]);
	}
	
	invertVetor(V, 0, TAM-1);
	
	printf("\n\n");
	
	for(i=0; i<TAM; i++){
	
		printf("%i ", V[i]);
	}
	
	return  0;
}

//funcao recursiva:
void invertVetor(int V[], int i, int j){
	if(i< j){
		int aux = V[i];
		V[i] = V[j];
		V[j] = aux;
	
		i++;
		j--;
	
		invertVetor(V,i,j);		
	}
	
	
}

