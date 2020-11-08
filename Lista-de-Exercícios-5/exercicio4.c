/*4. Faça um programa que leia tres valores inteiros e chame uma função que receba estes 3  valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, 
o segundo menor valor na variável do meio, e o maior valor na  ´última variável.
 A função deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.*/
 
 
#include<stdio.h> 

int ordenar(int *A, int *B, int *C);
 
 int main(){
 	int A, B, C, num;
 	printf("Insira o valor de A: ");
 	scanf("%i", &A);
 	
 	printf("Insira o valor de B: ");
 	scanf("%i", &B);
 	
 	printf("Insira o valor de C: ");
 	scanf("%i", &C);
 	
 	ordenar(&A, &B, &C);
 	
 	printf("%i %i %i",A, B,C);
 	
 	return ordenar(&A, &B, &C);
 }
 
int ordenar (int *A, int *B, int *C){
 	int aux;
 	
	if(*A > *B){ 
		aux = *A;
		*A = *B;
		*B = aux; 
		
		if(*A > *C){ 
			aux = *A; 
			*A = *C; 
			*C = *B; 
			*B = aux;
		}
		
		else if(*B > *C){ 
			aux = *B; 
			*B = *C; 
			*C = aux; 
		}
	}
	else{ 
		if(*A > *C){ 
			aux = *A; 
			*A = *C; 
			*C = *B; 
			*B = aux; 
		}
		
		else if(*B>*C){ 
			aux = *B; 
			*B = *C; 
			*C = aux; 
		}
	}
	
	if(*A==*B && *A==*C)
		return 1;
		
	else
		return 0;	
 }
