#include <stdio.h>

void main(){
	/* Operadores
	==, !=, <,>, >=, <= */
	
	int x, y, *ptrx, *ptry;
	
	ptrx = &x;
	ptry = &y;
	
	if(ptrx == ptry)
		printf("Sao iguais");
	else
		printf("Sao diferentes");
	
}
