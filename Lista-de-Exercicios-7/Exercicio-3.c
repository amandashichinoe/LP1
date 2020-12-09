/*3) Crie uma função que receba como parâmetros dois vetores de inteiros (já ordenados): x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2.
 A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de  x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.
 x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8},  x3 irá conter {1, 3, 4, 5, 6, 7, 8} */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
 
int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);

int main(){
	int x1[] = {1, 3, 5, 6, 7};
	int x2[] = {1, 3, 4, 6, 8};
	int n1 = sizeof(x1)/sizeof(int);
	int n2 = sizeof(x2)/sizeof(int);
	int qtd = n1;
	
	//chamando a funcao
	int *ptr = uniao (x1, x2, n1, n2, &qtd);
	
	//imprimindo o vetor 3
	int i;
	for(i=0; i<(qtd); i++){
    	printf("%i ", *(ptr+i));
  	}
  	printf("\n\nTamanho de x3 = %i", qtd);
  	
  	free(ptr);
  
	return 0;
}

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd){
	int i = 0;
	int j = 0;
	int k = 0;
	int *x3 = malloc(*qtd*sizeof(int));
	bool continuar = true;

	while(continuar == true){
    	if(i == n1 && j == n2)
    		break;
    	
	    else if (k == 0){
	      *x3 = *(x1); 
	      i++;
	      k++;
	    }

	    else if(i == n1){
	    	if(*(x3+k-1) != *(x2+j)){
	        	(*qtd)++;
	        	x3 = realloc(x3, *(qtd)*sizeof(int));        
	        	*(x3+k) = *(x2+j);
	        	j++;
	        	k++;
	      	}
	      
	      	else
	        	j++;
    	}

	    else if(j == n2){
	    	if(*(x3+k-1) != *(x1+i)){
	        	*(x3+k) = *(x1+i++);
	        	k++;
	      	}
	      	
			else 
		  		i++;
	    }
	
	    else if(*(x1+i) > *(x2+j)){ 
	    	if(*(x3+k-1) != *(x2+j)){     
	        	(*qtd)++;
	        	x3 = realloc(x3, *(qtd)*sizeof(int));  
	        	*(x3+k) = *(x2+j);	
	        	j++;
	        	k++;
	      	}
      		
			else
        		j++;
    	}

    	else{
      		if(*(x3+k-1) != *(x1+i)){
        		*(x3+k) = *(x1+i);
        		i++;
        		k++;
      		}
    		
			else
	  	 		i++;
    	}
  	}
  	
	return x3;
}

