/* 2. Escreva um programa que contenha duas vari�veis inteiras. 
   Compare seus endere�os e exiba o maior endere�o. */

#include <stdio.h>

int main(){
	int A;
	int B;
	
	int *ptr1;
	int *ptr2;
	
	printf("Endereco de A: %i\n", &A);
	printf("Endereco de B: %i\n", &B);
	
	ptr1 = &A;
	ptr2 = &B;
	
	if(ptr1 > ptr2)
		printf("O maior endereco e: %i", ptr1);
		
	else
		printf("O maior endereco e: %i", ptr2);
	
	return 0;
}

