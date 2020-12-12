//aula 05-10
//Funcoes Recursivas

#include <stdio.h>

void f1(int cont);

int main(){
	
	f1(1);

	return 0;
}

void f1(int cont){
	printf("\n%i", cont);

	if(cont < 5){
		f1(cont +1); //funcao recursiva -> chama ela mesma  | nesse caso o cont nao e alterado, so se fosse cont = cont +1
	}
		
	printf("\n%i", cont);
	
	return;
}

