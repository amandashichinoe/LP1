//Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 at� N em ordem crescente.

#include <stdio.h>

int cont(int N, int i);

int main(){
	int num;
	printf("Insira um numero para imprimir os valores de 0 ate ele: " );
	scanf("%i", &num);	
	cont(num,0);

	return 0;
}

int cont(int N, int i){
	printf("%i", i);
	
	if(N > i){
		return cont(N, i+1);
	}
	
	else{
		return 0;
	}
}

