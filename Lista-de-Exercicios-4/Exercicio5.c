/*5. Fa�a um programa que leia dois valores inteiros e chame uma fun��o que receba estes  2 valores de entrada e retorne o maior valor na primeira vari�vel 
e o menor valor na  segunda vari�vel.
    Escreva os conte�dos das 2 vari�veis na tela. */

#include <stdio.h>

int ordValor(int *A, int *B);

int main(){
	int A, B;
	
	printf("Insira o valor de A: ");
	scanf("%i", &A);
	
	printf("Insira o valor de B: ");
	scanf("%i", &B);
	
	ordValor(&A, &B);
	
	printf("Maior valor: %i \nMenor valor: %i", A, B);
	
	return 0;
}

int ordValor(int *A, int *B){
	if(*A > *B)
		return *A , *B;
	
	else{
		int aux = *A;
			*A = *B;
			*B = aux;
		
		return *A, *B;
	}
		
}
