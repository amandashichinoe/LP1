/*O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y. 
O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.

48 % 30 -> 18
30 % 18 -> 12
18 % 12 -> 6
12 % 6 -> 0
return 6*/

#include <stdio.h>

int MDC(int x, int y);

int main(){
	printf("MDC (48,30): %i \n", MDC(48,30));
	printf("MDC (25,0): %i", MDC (25,0));

	return 0;
}

int MDC(int x, int y){
	int a;
	if(y==0){ 
		return x; 
	}
	
	else{
		return MDC(y, x%y); 
	}
}

