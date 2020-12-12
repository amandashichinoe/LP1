//aula 03-11
#include <stdio.h>

int main(){
	
	int i;
	
	//string
	char nome[10];
	
	nome[0] = 'F';		
	nome[1] = 'A';
	nome[2] = 'T';
	nome[3] = 'E';
	nome[4] = 'C';
	
	
	for(i=0; i < 10; i++){
	   printf("\nnome[%i]=%c",i,nome[i]);	
	}
	
	
	
	
	
	return 0;
	
}
