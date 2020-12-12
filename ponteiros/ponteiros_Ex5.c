//Aula 19-10
#include <stdio.h>

int main(){
		
    int   x = 20.5; 
	float y = 30.5;
	char  z = 'a';
		
	int   *ptr1;
	float *ptr2;
	char  *ptr3;
		
	ptr1 = &x;
	ptr2 = &y;
	ptr3 = &z;
	
	printf("\nConteudo de ptr1: %i", *ptr1);
	printf("\nConteudo de ptr2: %f", *ptr2);
	printf("\nConteudo de ptr3: %c", *ptr3);
		
	return 0;
}
