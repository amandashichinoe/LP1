//aula 09-11
#include <stdio.h>

int main(){
	
	int    valor = 10;
	int   *ptr1;
	int  **ptr2;
	
	ptr1 = &valor;
	ptr2 = &ptr1;
	
	printf("\nConteudo de valor = %i",  valor);
	printf("\nEndereco de valor = %i\n", &valor);

	printf("\nConteudo do endereco de ptr1  = %i", *ptr1);
	printf("\nEndereco que ptr1 guarda  = %i", ptr1);
	printf("\nEndereco de ptr1 = %i\n", &ptr1);
	
	printf("\nEndereco de ptr2 = %i",  &ptr2 );
	printf("\nEndereco que ptr2 guarda = %i",   ptr2 );
	printf("\nConteudo do endereco = %i",  *ptr2 );
	printf("\nConteudo do Contedudo do endereco = %i\n", **ptr2 );
	
	
	
	return 0;
}
