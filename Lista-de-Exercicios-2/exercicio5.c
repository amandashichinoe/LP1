//5. Receber 12 n�meros e armazen�-los em um vetor. Ao final, exibir quais foram os n�meros positivos informados.
#include <stdio.h>
#define TAM 12

int main(){
	int i, v[TAM];
	
	for(i=0; i<TAM; i++){
		printf("Digite um numero: ");
		scanf("%i", &v[i]);
	}
	
	for(i=0; i<TAM; i++){
		if(v[i] % 2 == 0){
			printf("%i ", v[i]);
		}
	}
	
	return 0;
}
