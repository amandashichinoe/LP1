#include <stdio.h>

float menorTwo(float num1, float num2);

int main(){
	
	printf("\nMenor = %f", menorTwo(-6,5));
	printf("\nMenor = %f", menorTwo(-6,-9));
	printf("\nMenor = %f", menorTwo(-4,5));
	return 0;
}

float menorTwo(float num1, float num2){
	return num1 < num2 ? num1 : num2; //if ternario
}



