//1. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.

#include <stdio.h>


int main(){

	float V[] = {2,4,6,8,10,13,15,11,17,19};
	float *ptr;
	int i;
	
	ptr = V; 
	
	for(i=0; i<10; i++){
		printf("End pos %i: %d\n", i, ptr++);
	}
	
	return 0;
}

