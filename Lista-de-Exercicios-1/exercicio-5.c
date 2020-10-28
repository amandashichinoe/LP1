#include <stdio.h>

float maiorTwo(float num1, float num2);
float maiorThree(float num1, float num2, float num3);

int main(){
	printf("\nMaior = %f", maiorThree(3,-5,1));
	printf("\nMaior = %f", maiorThree(3,-5,-1));
	printf("\nMaior = %f", maiorThree(3,9,-10));
	return 0;
}

float maiorTwo(float num1, float num2){
	return num1 > num2 ? num1 : num2; 
}

float maiorThree(float num1, float num2, float num3){
	return maiorTwo(num1, maiorTwo(num2,num3));
}
