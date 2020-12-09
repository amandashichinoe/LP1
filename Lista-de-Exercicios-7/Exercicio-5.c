/*5)  Crie um programa para manipular vetores. Implemente uma função que receba um vetor de inteiros V e retorne um outro vetor de inteiros alocado 
dinamicamente com todos os valores de V que estejam entre o valor mínimo e máximo (que também são passados como parâmetro para a função).
*/

#include <stdio.h>
#include <stdlib.h>

int* valores_entre(int *v, int n, int min, int max, int *qtd);

int main() {
	int n, min, max, i;
	int qtd = 0;
	
	printf("Informe a quantidade de elementos do vetor: ");
	scanf("%i", &n);
	
	int *v = malloc(n*sizeof(int));
   
	for (i=0; i<n; i++){
  		printf("Insira o %i elemento do vetor: ", i+1);
		scanf("%i", v+i);
  	}
  	
  	printf("\nVetor informado = ");
  	for (i=0; i<n; i++)
  		printf("%i ", v[i]);
  	
  
  	printf("\n\nInsira o valor minimo a ser buscado: ");
  	scanf("%i", &min);
  	printf("Insira o valor maximo a ser buscado: ");
  	scanf("%i", &max);

	int *ptr;
	ptr = valores_entre(v, n, min, max, &qtd);

	if(ptr == NULL)
    	printf("\nNenhum valor entre os parametros minimo e maximo informados!");

	else{
		printf("\nValores encontrados entre os parametros minimo e maximo informados: ");
  		for (i=0; i<qtd; i++)
    		printf("%i ", *(ptr+i));
	}

	free(v);
	free(ptr);
  
	return 0;
}

int* valores_entre(int *v, int n, int min, int max, int *qtd){
	int i;

	for (i=0; i<n; i++){
    	if(*(v+i) > min && *(v+i) < max){
      	(*qtd)++;
    	}
  	}

	if(*qtd == 0) 
		return NULL;

  	int *ptr = malloc((*qtd)*sizeof(int));
  	int aux = 0;
  	for (i=0; i<n; i++){
    	if(*(v+i)  > min && *(v+i) < max){
      		*(ptr+aux) = *(v+i);
      		aux++;
    	}
  	}

	return ptr;
}
