//3. Receber 8 n�meros e armazen�-los em um vetor. Ao final, pedir para o usu�rio escolher uma posi��o do vetor e exibir o n�mero contido nela.
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
