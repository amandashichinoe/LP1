/* 4)  Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. 
A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd 
para retornar o tamanho de x3.
Sendo:
x1 = {1, 3, 5, 6, 7}
x2 = {1, 3, 4, 6, 8}
x3 irá conter {1, 3, 6}.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd);

int main(){
	int x1[] = {1, 3, 5, 6, 7};
	int x2[] = {1, 3, 4, 6, 8};
	int n1 = sizeof(x1)/sizeof(int);
	int n2 = sizeof(x2)/sizeof(int);
	int qtd = 0;
	
	//chamando a funcao
	int *ptr = interseccao (x1, x2, n1, n2, &qtd);
	
	//imprimindo o vetor 3
	int i;
	for(i=0; i<(qtd); i++){
    	printf("%i ", *(ptr+i));
  	}
  	printf("\n\nTamanho de x3 = %i", qtd);
  	
  	free(ptr);
  
	return 0;
}

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd){
	int i = 0;
	int j = 0;
	int k = 0;
	int *x3 = malloc(*qtd*sizeof(int));
	bool continuar = true;
	
	while(continuar == true){
    	if(i == n1 || j == n2) break;

    	if(*(x1+i) == *(x2+j)){
      		(*qtd)++;
      		x3 = realloc(x3, *(qtd)*sizeof(int));
      		*(x3+k) = *(x2+j);
      		i++;
      		j++;
      		k++;
   		}
    
		else{
      		if(*(x1+i) > *(x2+j))
        		j++;
      
	  		else
        		i++;
      	}
    }
  
	return x3;
}

