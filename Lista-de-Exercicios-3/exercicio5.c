//Crie uma fun��o recursiva que receba um n�mero inteiro positivo N e calcule o somat�rio dos n�meros de 1 a N.

#include <stdio.h>

int somarN(int N);

int main(){
	int N;
	do{
		printf("Insira um numero inteiro N maior do que 0: ");
		scanf("%i", &N);	
	} while (N<=0);

	printf("A soma de todos os numeros positivos inteiros de 1 ate N e: %i", somarN(N));
	
	return 0;
}

int somarN(int N){
	if(N==0){
		
	}
	
	else{
		return N + somarN(N-1);
	}
}

