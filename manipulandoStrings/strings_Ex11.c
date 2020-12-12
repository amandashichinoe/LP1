//aula 03-11
#include <stdio.h>
#include <string.h>

int main(){
	
	//string
	char nome[10];
	char sobrenome[10];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("\n%s.", nome);
	printf("\n%s.", strupr(nome));
	
   printf ("tolower(A) = %c\n", tolower('A'));
   printf ("toupper(A) = %c", toupper('A'));
	
	return 0;
	
}
