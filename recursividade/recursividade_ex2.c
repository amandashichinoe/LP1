//aula 05-10
//Funcoes Recursivas  - Exemplo 2
#include <stdio.h>

int f1(int cont);

int main()
{
	int valor;
	
	valor =  f1(5);	
	printf("%i", valor);
	
	return 0;
}

int f1(int cont){
	
	if(cont == 0)
	{
		return 1;
	}
	else
	{
		return cont * f1(cont - 1);
	}
}
