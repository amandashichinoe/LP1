//aula 10-11
#include <stdio.h>
#define TAM 4
int main()
{
	int m[TAM][TAM] = { 
	                     {1,  2, 3, 4},
						 {5,  6, 7, 8},
						 {9, 10,11,12},
						 {13,14,15,16}
					  };
					  

	int *ptr;					  
	
	ptr = m[0];
	printf("\n%i", *ptr);
	ptr = m[1];
	printf("\n%i", *ptr);
	ptr = m[2];
	printf("\n%i", *ptr);
	ptr = m[3];
	printf("\n%i", *ptr);
	
	
	
	
	
	return 0;
}
