//Aula 19-10
#include <stdio.h>

int main(){
	
    float x = 20.5; 
	float y = 30.5;
	float *ptr;
    
	ptr = &x;
	printf("\nEndereco que ptr guarda %i", ptr );
	printf("\nO conteudo do endereco que ptr guarda: %f", *ptr );
	
	ptr = &y;
    printf("\nEndereco que ptr guarda %i", ptr );
    printf("\nO conteudo do endereco que ptr guarda: %f", *ptr );
	
	return 0;
}
