//aula 09-11
#include <stdio.h>

int main(){
	
	int    x = 10, y = 20;
	int   *ptr1, *ptr2;
	int  **ptr3;
	
	
	ptr3  = &ptr2;
	*ptr3 = &x;
	ptr3  = &ptr1;
	*ptr3  = &y;
	
	*ptr1 = 40;
	*ptr2 = 80;
	
	printf("\n%i",   x);
	printf("\n%i",   y);
	
	
	
	return 0;
}
