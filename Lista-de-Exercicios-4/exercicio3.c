/* 3. Escreva um programa que contenha duas variáveis inteiras. 
    Leia essas variáveis do teclado. 
    Em seguida, compare seus endereços e exiba o conteudo do maior endereço. */

#include <stdio.h>

int main(){
	int A;
	int B;
	
	printf("Insira o valor de A: ");
	scanf("%i", &A);
	
	printf("Insira o valor de B: ");
	scanf("%i", &B);
	
	int *ptr1;
	int *ptr2;
	
	printf("Endereco de A: %i\n", &A);
	printf("Endereco de B: %i\n", &B);
	
	ptr1 = &A;
	ptr2 = &B;
	
	if(ptr1 > ptr2)
		printf("O conteudo do maior endereco e: %i", *ptr1);
		
	else
		printf("O conteudo do maior endereco e: %i", *ptr2);

	return 0;
}


