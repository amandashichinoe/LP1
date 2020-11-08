/*9. Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array.  
Agora, some mais um (+1) a cada posicao do array usando o ponteiro (use *). */

#include <stdio.h>
#define TAM 5

int main(){
	int vetor[]={1,2,3,4,5};
	int *ptr = vetor;
	int i;
	
	for(i=0; i<TAM; i++){
		*ptr+=1;
		ptr++;
		
		printf("%i", vetor[i]);
	}	
	
	return 0;
}
