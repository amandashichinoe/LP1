//Aula dia 26-10

#include <stdio.h>

void f3(int *x, int y);

int main(){
	
	int x=20;
	 printf("\nConteudo de x = %i", x); // x do main

	 f3(&x, x);
	 printf("\nConteudo de x = %i", x); //retorna 40
	 
	 return 0;
}

void f3(int *x, int y){// *x recebe o endereco de x e pega o conteudo de x , y eh uma copia de x
	*x = *x+y; // conteudo do endereco de x = conteudo do endereco de x + copia de x  --> 40 = 20+20
}

