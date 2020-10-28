/*1.Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). 
   Modifique os valores de cada variavel usando os ponteiros. 
   Imprima os valores das variáveis antes e após a modificação. */
   
   #include <stdio.h>
   
   int main(){
		int i = 10.3;
   		float f = 20.5;
   		char c = 'A';
   
		int *ptr1;
		float *ptr2;
		char *ptr3;
	
		ptr1 = &i;
		ptr2 = &f;
		ptr3 = &c;
	
		printf("\nConteudo de ptr1 %i", *ptr1);
		printf("\nConteudo de ptr2 %f", *ptr2);
		printf("\nConteudo de ptr3 %c", *ptr3);
	   
   		return 0;
	}

   
