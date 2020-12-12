//aula 03-11
#include <stdio.h>

int main(){
	
	//string
	char nome[10];
	char sobrenome[10];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	//Ou
	//printf("Digite seu sobre nome: ");
	//gets(sobrenome);
	
	
	printf("\n%s.", nome);
	printf("\n%s.", sobrenome);
	
	return 0;
	
}
