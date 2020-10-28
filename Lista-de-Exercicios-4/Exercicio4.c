/*4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas  2 variaveis e troque o seu conteúdo.
    Esta função é chamada passando duas  variaveis A e B, por exemplo e, após a execução da função, A conterá o valor de B e B  terá  valor de A. */

#include <stdio.h>

void trocarCont(int *A, int *B);

int main(){
	int A;
	int B;
	
	printf("Insira o valor de A: ");
	scanf("%i", &A);
	
	printf("Insira o valor de B: ");
	scanf("%i", &B);
	
	printf("Voce informou que o conteudo de A e %i, e o conteudo de B e %i.\n", A, B);
	
	trocarCont(&A, &B);
	
	printf("Agora o conteudo de A e %i, e o conteudo de B e %i.", A, B);
	
	return 0;
}

void trocarCont(int *A, int *B){
	int aux;
	aux = *B;
	*B = *A;
	*A = aux;
}
