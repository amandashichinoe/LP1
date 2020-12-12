#include <stdio.h>

int main()
{
	int v[] = {5,12,3,4,5,6,7,8,9,10};
	int *ptr1, i;
	
	ptr1 = v;
	
	printf("\nOrdem crescente");
	for(i=0; i < 10; i++)
	{
		printf("\n*(ptr1+%i)= %i", i, *(ptr1 + i));	
	}
	printf("\n\nOrdem decrescente");
	for(i=9; i >=0 ; i--)
	{
		printf("\n*(ptr1+%i)= %i", i, *(ptr1 + i));	
	}
	
	
	
	
	
	
	
	
	
	
}
