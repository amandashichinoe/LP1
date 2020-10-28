//4. Receber 15 números e armazená-los em um vetor. Ao final, exibir o dobro de cada um dos números.
#include <stdio.h>
#define TAM 15

int main(){
	int i, v[TAM];
	
	for(i=0; i<TAM; i++){
		printf("Insira um numero: ");
		scanf("%i", &v[i]);
	}
	
	for(i=0;  i<TAM; i++){
		printf("O dobro do numero e: %i\n", v[i]=v[i] * 2);
	}
	
}
