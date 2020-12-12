//aula 26/10

#include <stdio.h>

int somaVetor1(int *x, int tam);
int somaVetor2(int *x, int tam);

int main(){
	int v1[]={1,2,3,4,5};
	int v2[]={6,7,8};
	
	int tam = sizeof(v1)/sizeof(int); //solucao que minimiza bugs
	int soma = somaVetor1(&v1[0], tam); //(endereco do primeiro vetor(posso usar &v1[0] ou v1), tamanho do vetor) &v[0] endereco do primeiro elemento, v1 vetor inteiro
	printf("\nSomatorio de v1 = %i", soma);
	
	soma = somaVetor2(   v1, tam);
	printf("\nSomatorio de v2 = %i", soma);
	
	return 0;
}

int somaVetor1(int *x, int tam){
	int i, soma = 0;
	
	for(i = 0; i< tam; i++){
		soma = soma + x[i];
	}
	
	return soma;
}

int somaVetor2(int *x, int tam){
	int i, soma = 0;
	
	for(i = 0; i< tam; i++){
		soma = soma + *x;//sempre atribui o valor do conteudo do endereco informado nesse caso {1}
		x++; //aqui ele faz ++ no endereco, porque o x eh um ponteiro
	}
	
	return soma;
}
