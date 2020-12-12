//Aula 19-10
#include <stdio.h>

int main(){
	
	int x = 20; 
	int y = 30;
	
	int *ptr;
	
    printf("\nConteudo de x = %i",  x);
	printf("\nEndereco de x = %i", &x);
		
	printf("\nConteudo de y = %i",  y);
	printf("\nEndereco de y = %i", &y);
		
	printf("\nTamanho de um ponteiro int: %i", sizeof(int *) );
    printf("\nEndereco de um ponteiro int: %i", &ptr );
    
	ptr = &x;
	printf("\nEndereco que ptr guarda: %i", ptr );
	
	ptr = &y;
    printf("\nEndereco que ptr guarda: %i", ptr );
	
	return 0;
}
