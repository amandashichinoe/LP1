/*4. Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas  2 variaveis e troque o seu conte�do.
    Esta fun��o � chamada passando duas  variaveis A e B, por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B e B  ter�  valor de A. */

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
