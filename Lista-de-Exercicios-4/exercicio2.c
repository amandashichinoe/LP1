/* 2. Escreva um programa que contenha duas variáveis inteiras. 
   Compare seus endereços e exiba o maior endereço. */

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

