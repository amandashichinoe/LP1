/*8. Implemente uma função que calcule a  área da superfície e o volume de uma esfera de raio R. Essa função deve obedecer ao protótipo:
    void calc_esfera(float R, float *area, float *volume) */
    
#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

void calc_esfera(float R, float *area, float *volume);

int main(){
	float area, volume, R;
	
	printf("Insira o valor do raio: ");
	scanf("%f", &R);
	
	calc_esfera(R, &area, &volume);
	printf("A area da superficie e: %f\n", area);
	printf("O volume da esfera e: %f\n", volume);
	
	return 0;
}

void calc_esfera(float R, float *area, float *volume){
	*area = 4 * PI * pow(R, 2);
	
	*volume =(4 * PI * pow(R,3))/3;
}

