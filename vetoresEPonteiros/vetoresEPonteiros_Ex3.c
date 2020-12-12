//aula 10-11
#include <stdio.h>
#define TAM 4
int main()
{
	int m[TAM][TAM] = { 
	                     {1,  2, 3, 4},{5,  6, 7, 8},{9, 10,11,12},{13,14,15,16}
					  };
					  

	int *ptr;					  
	
	ptr = m;
	
	printf("\n%i", *ptr);
	printf("\n%i", *(ptr + TAM));
	printf("\n%i", *(ptr + TAM * 2));
	printf("\n%i", *(ptr + TAM * 3));
	
	
	printf("\n%i", *(ptr           + 1));
	printf("\n%i", *(ptr + TAM     + 1));
	printf("\n%i", *(ptr + TAM * 2 + 1));
	printf("\n%i", *(ptr + TAM * 3 + 1));
	
	return 0;
}
