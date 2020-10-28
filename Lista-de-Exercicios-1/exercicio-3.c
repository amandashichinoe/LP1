#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isNulo(float a);
bool isPositivo(float num);
float a,b,c, raizA, raizB;
float delta(float a, float b, float c);

int main(){
	printf("Insira o valor de a: ");
	scanf("%f", &a);
	
	if(isNulo(a)){
		printf("Nao e uma equacao de segundo grau, pois a = 0");
	}
	else{
		printf("Insira o valor de b: ");
		scanf("%f", &b);
		printf("Insira o valor de c: ");
		scanf("%f", &c);
		
		if(isPositivo(delta(a,b,c))){
			printf("%f", delta(a,b,c));
			raizA=((-b+sqrt(delta(a,b,c)))/(2*a));
			raizB=((-b-sqrt(delta(a,b,c)))/(2*a));
			printf("As raizes sao %f e %f", raizA, raizB);
		}
		else{
			printf("Erro");
		}
	}
	
	
	return 0;
}

bool isNulo(float a){
  return a == 0 ? true : false;
}

bool isPositivo(float num){
	return num>=0 ? true : false;
}

float delta(float a, float b, float c){
	return (b*b)-4*a*c;
}




