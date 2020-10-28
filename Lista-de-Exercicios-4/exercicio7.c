/*Crie um programa que contenha uma fun��o que permita passar por par�metro dois  n�meros inteiros A e B. 
    A fun��o dever� calcular a soma entre estes dois n�meros e armazenar o resultado na vari�vel A. 
    Esta func��o n�o dever� possuir retorno, mas dever� modificar o valor do primeiro par�metro.
    Imprima os valores de A e B na fun��o principal.*/


#include <stdio.h>

void funcao(int *A, int B);

int main(){
	
	int A, B;
	
    printf("Insira o valor de A: ");
    scanf("%i", &A);
    
	printf("Insira o valor de B: ");
    scanf("%i", &B);
    
	funcao(&A, B);
	
	printf("\nConteudo de A = %i \nConteudo de B = %i", A, B); 

	return 0;
}

void funcao(int *A, int B){
	*A = *A + B;
}

