#include <stdio.h>

char unidade;
float temp;
int main(){
	printf("Insira a unidade da temperatura de entrada - C para Celsius ou F para Farenheit: ");
	scanf("%c", &unidade);
	printf("Insira a temperatura: ");
	scanf("%f", &temp);
	switch(unidade){
		case 'C':
			temp=(9*temp/5)+32;
			printf("A temperatura em Farenheit e: %.2lf", temp);
		break;
		
		case 'F':
			temp = 5*(temp-32)/9;
			printf("A temperatura em Celsius e: %.2lf", temp);
		break;
	}
	
	return 0;
}



