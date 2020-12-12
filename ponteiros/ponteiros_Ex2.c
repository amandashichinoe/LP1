//Aula 19-10
#include <stdio.h>

int main(){
	
	int x = 20; 
	int y = 30;
		
	printf("\nConteudo de x = %i",  x);
	printf("\nEndereço de x = %i", &x);
	printf("\nTamanho  de x = %i", sizeof(int));
		
	printf("\nConteudo de y = %i",  y);
	printf("\nEndereço de y = %i", &y);
	printf("\nTamanho  de y = %i", sizeof(int));
	
	return 0;
}
