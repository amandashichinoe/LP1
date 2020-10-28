#include <stdio.h>

float nota1, nota2, nota3, highest, lowest; 
float mediaDeTres(float nota1, float nota2, float nota3);
float mediaDuasMaisAltas(float nota1, float nota2, float nota3);
float highestNota(float nota1, float nota2, float nota3);
float lowestNota(float nota1, float nota2, float nota3);

int main(){
	printf("Insira a nota 1:");
	scanf("%f", &nota1);
	printf("Insira a nota 2:");
	scanf("%f", &nota2);
	printf("Insira a nota 3:");
	scanf("%f", &nota3);
	
	printf("A media das tres notas e': %.2lf", mediaDeTres(nota1, nota2, nota3));
	printf("\nA media das duas notas mais altas e': %.2lf", mediaDuasMaisAltas(nota1, nota2, nota3));
	printf("\nA maior nota e': %.2lf ", highestNota(nota1, nota2, nota3));
	printf("\nA menor nota e': %.2lf",lowestNota(nota1, nota2, nota3));
}

float mediaDeTres(float nota1, float nota2, float nota3){
	return (nota1+nota2+nota3)/3;
}

float mediaDuasMaisAltas(float nota1, float nota2, float nota3){
	return (nota1+nota2+nota3-lowestNota(nota1, nota2, nota3))/2;	
}

float highestNota(float nota1, float nota2, float nota3){
 	highest = nota1 > nota2 ? nota1 : nota2;
 	return highest > nota3 ? highest : nota3; 	
 }

float lowestNota(float nota1, float nota2, float nota3){
 	lowest = nota1 < nota2 ? nota1 : nota2;
 	return lowest < nota3 ? lowest : nota3; 
 }

