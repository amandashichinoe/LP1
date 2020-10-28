//Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 – 321.

#include <stdio.h>

int inverterNum(int N);

int main(){
	int num;
	
	printf("Insira o numero que deseja inverter: ");
	scanf("%i", &num);
	
	inverterNum(num);
	
	return 0;
}

int inverterNum(int N){
	if(N == 0)
	return N;
	
	else{
		printf("%i", N % 10);
		N /= 10;
		return inverterNum(N);
	}
	
}
