#include <stdio.h>
#define TAM 3
int main(){
	
	int m[TAM][TAM]= {
						{1,2,3},
						{4,5,6},
						{7,8,9}
	};
	
	int *ptr, i,j;
	ptr=m[0];
	printf("Matriz 1\n\n");
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			int aux = (TAM*i) + j;
			printf("%i ", *(ptr+aux));
		}
		printf("\n"); 
	}
	
		printf("\nMatriz Invertida\n\n");
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			int aux = (TAM*j) + i;
			printf("%i ", *(ptr+aux));
		}
		printf("\n"); 
	}
	
	return 0;
}
