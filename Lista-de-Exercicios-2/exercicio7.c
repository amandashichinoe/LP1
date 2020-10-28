/* 7. Escreva um algoritmo em linguagem C que:
   a) leia um vetor A de 12 números reais; 
   b) construa e imprima um vetor B formado da seguinte maneira:
 
      - os elementos de índice par são os correspondentes de A divididos por 2;
      - os elementos de índice ímpar são os correspondentes de A multiplicados por 3. */
      
#include <stdio.h>
#define TAM 12

int main(){
	int i;
	float v[TAM];
	
	for(i=0; i<TAM; i++){
		printf("Digite um numero: ");
		scanf("%f", &v[i]);
	}
	
	for (i=0; i<TAM; i++){
		if(i%2 ==0){
			printf("%.2lf ", v[i]/2);
		}
		else{
			printf("%.2lf ", v[i] * 3);
		}
	}
	
	return 0;
}
