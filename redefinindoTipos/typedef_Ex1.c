//aula 23-11
#include <stdio.h>

typedef struct{
	int dia;
	int mes;
	int ano;
} data;

data somaData(data inicio);


int main()
{
	data d1, d2;
	
	printf("Digite uma data:");
	scanf("%i %i %i", &d1.dia, &d1.mes, &d1.ano);
	
	d2 = somaData(d1);
	
	printf("\n%i/%i/%i", d1.dia, d1.mes, d1.ano);
	printf("\n%i/%i/%i", d2.dia, d2.mes, d2.ano);
	
	
}


data somaData(data inicio){
	data fim;
	
	fim.dia = inicio.dia + 1;
	fim.mes = inicio.mes + 1;
	fim.ano = inicio.ano + 1;
	
	return fim;
}

