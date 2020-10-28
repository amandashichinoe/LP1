/*9. Leia 10 números inteiros e armazene em um vetor A. Crie dois novos vetores A1 e A2. Copie os valores ímpares de A para A1, e os valores pares de A para A2.
 Note que cada um dos vetores A1 e A2 tem no máximo 10 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos utilizados de A1 e A2.*/
#include <stdio.h>
#define TAM 10

int main(){
	int A[TAM], A1[TAM], A2[TAM], i, a=0, b=0;
	
	//Entrada
	for(i=0; i < TAM ; i++){
		printf("Insira um numero: ");
		scanf("%i", &A[i]);
	}
	
	//Processamento
	for (i=0; i<TAM; i++){
		if(A[i] % 2 ==1){
			A1[a] = A[i];
			a++;
		}
		
		else{
			A2[b] = A[i];
			b++;
		}
	}
	
	//Saida
	printf(" Vetor A1 = ");
	for(i=0; i < a; i++ ){
		printf("%i ", A1[i]);
	}
	
	printf(" Vetor A2 = ");
	for(i=0; i < b; i++ ){
		printf("%i ", A2[i]);
	}
	
	return 0;
}



