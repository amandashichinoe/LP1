//3. Receber 8 números e armazená-los em um vetor. Ao final, pedir para o usuário escolher uma posição do vetor e exibir o número contido nela.
#include <stdio.h>
#define TAM 8

int main(){
	int v[TAM], i, posicao;
	
	for(i=0; i < TAM; i++){
		printf("Insira um numero: ");
		scanf("%i", &v[i]);
	}
	
	printf("Escolha uma posicao de 1 a 8 para exibir o numero contido nela: ");
	scanf("%i", &posicao);
	
	if(posicao >= 0 && posicao <= 8){
		printf("\n O numero armazenado na posicao %i = %i", posicao, v[posicao-1]);
	}
	else{
		printf("Digite uma posicao valida!");
	}
	
	
	return 0;
	
	
}
