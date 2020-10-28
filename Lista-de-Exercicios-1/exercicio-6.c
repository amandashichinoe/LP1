#include <stdio.h>

float menorTwo(float num1, float num2);
float menorThree(float num1, float num2, float num3);

int main(){	
	printf("\nMenor = %f", menorThree(3,5,1));
	printf("\nMenor = %f", menorThree(3,-5,-1));
	printf("\nMenor = %f", menorThree(3,9,-10));
	return 0;
}

float menorTwo(float num1, float num2){
	return num1 < num2 ? num1 : num2; 
}

float menorThree(float num1, float num2, float num3){	
	return menorTwo(num1, menorTwo(num2,num3));	
}
