/*6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois numeros lidos. 
    A função deverá armazenar o dobro  de A na propria variável A e o dobro de B na própria variável B*/

#include <stdio.h>

int somarDobro(int *A, int *B);

int main(){
	int A, B;
	
    printf("Insira o valor de A: ");
    scanf("%i", &A);
    
	printf("Insira o valor de B: ");
    scanf("%i", &B);
    
	somarDobro(&A, &B);
	
	printf("\nConteudo de A = %i \nConteudo de B = %i", A, B); 

	return 0;
}

int somarDobro(int *A, int *B){
	*A *= 2; // *A = A * 2
	*B *= 2; // *B = B * 2
	
	return *A, *B;
}
