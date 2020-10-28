/*A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. 
Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros.*/

#include <stdio.h>

int Multip_Rec(int n1,int n2);

int main(){
	
	printf("%i", Multip_Rec(10, 10));
	printf("\n%i", Multip_Rec(0, 10));
	printf("\n%i", Multip_Rec(3, 5));
}

int Multip_Rec(int n1,int n2){
	
	if(n1==0)
		return 0;

	
	else
		return Multip_Rec(n1-1, n2) + n2; 
}
