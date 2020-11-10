#include <stdio.h>
#define TAM 4
int main(){
	
	int m1[TAM][TAM]= {
						{1,2,3,4},
						{5,6,7,8},
						{9,10,11,12},
						{13,14,15,16}
	};
	int m2[TAM][TAM]= {
						{2,4,6,8},
						{10,12,14,16},
						{18,20,22,24},
						{26,28,30,32}
	};
	int m3[TAM][TAM];
	int *ptr1, *ptr2, *ptr3, i, j;
	
	ptr1 = m1[0];
	ptr2 = m2[0];	
	ptr3 = m3[0];
	
	printf("Matriz 1\n\n");
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			int aux = (TAM*i) + j;
			printf("%i ", *(ptr1+aux));
		}
		printf("\n"); 
	}
	
	printf("\nMatriz 2\n\n");
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			int aux = (TAM*i) + j;
			printf("%i ", *(ptr2+aux));
		}
		printf("\n"); 
	}
	//somando as matrizes 1 e 2
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			m3[i][j] = *ptr1++ + *ptr2++;
		}
	}
	//imprimindo a matriz gerada
	printf("\n\nSoma das Matrizes\n\n");
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			int aux = (TAM*i) + j;
			printf("%i ", *(ptr3+aux));
		}
		printf("\n"); 
	}
	
	return 0;
}
