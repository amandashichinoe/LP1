//aula 10-11
#include <stdio.h>

int main()
{
	int v[] = {5,12,3,4,5,6,7,8,9,10};
	int *ptr1;
	
	ptr1 = &v[0];
	printf("\n*ptr1 = %i", *ptr1 );
	
	ptr1 = v;
	printf("\n*ptr1 = %i", *ptr1 );
	
	ptr1 = &v[1];
	printf("\n*ptr1 = %i", *ptr1 );
	
	ptr1 = v;
	printf("\n*ptr1 = %i", *(ptr1 + 1));
	printf("\n*ptr1 = %i", *ptr1 + 1);
	
	
	
	
	
	
	
}
