//aula 09-11
#include <stdio.h>

int main(){
	
	int    valor = 10;
	int   *ptr1;
	int  **ptr2;
	ptr1 = &valor;
	ptr2 = &ptr1;
	
	**ptr2 = 20;
	
	printf("\n%i",  *ptr1);
	printf("\n%i", **ptr2);
	printf("\n%i",   valor);
	
	
	
	return 0;
}
