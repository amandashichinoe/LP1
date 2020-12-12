//Aula dia 26-10
//endereco != conteudo do endereco
#include <stdio.h>

void f1 (int x); // tem um parametro que recebe um valor inteiro
void f2(int *x); //f2 tem um parametro que recebe um ponteiro para int --> recebe um endereco de memoria que aponta para o valor

int main(){
	
	int x=20;
	 printf("\nConteudo de x = %i", x); // x do main
	 
	 //chamada de f1 por valor (copia de x)
	 f1(x);
	 
	 printf("\nConteudo de x = %i", x);//retorna 20, porque ele fez uma c�pia, ent�o o valor n�o � alterado
	 
	 //chamada de f2 por refer�ncia
	 f2(&x);
	 printf("\nConteudo de x = %i", x);
	 
	 return 0;
}

void f1(int x){
	x = 40;// quando sair do f1 o x morre
}

void f2(int *x){
	*x = 60;
}
