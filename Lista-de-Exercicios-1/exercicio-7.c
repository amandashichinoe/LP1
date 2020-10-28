#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	
	printf("%i", Dado());
	
	return 0;
}

int Dado(){
	int num;
	
	srand(time(NULL));
	
	num=1+(rand() % 6);
	
	return num;
}
