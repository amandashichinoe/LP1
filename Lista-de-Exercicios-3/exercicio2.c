// Faça uma função recursiva que permita somar os elementos de um vetor de inteiros de 10 posições.
#include <stdio.h>

int somarVetor(int V[], int i);

int main(){
	int v[10] = {2,3,4,5,6,7,8,9,10,11};
	int tamVetor = sizeof(v)/sizeof(int);
	printf("%d", somarVetor(v,tamVetor-1));
	
}

int somarVetor(int V[], int i){
	if(i < 0)
		return 0;
	
	else
		return V[i] + somarVetor(V, i-1);
}
