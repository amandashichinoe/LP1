/*O m�ximo divisor comum dos inteiros x e y � o maior inteiro que � divis�vel por x e y. Escreva uma fun��o recursiva mdc em C, que retorna o m�ximo divisor comum de x e y. 
O mdc de x e y � definido como segue: se y � igual a 0, ent�o mdc(x,y) � x; caso contr�rio, mdc(x,y) � mdc (y, x%y), onde % � o operador resto.

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

