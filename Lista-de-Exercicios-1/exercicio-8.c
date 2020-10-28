#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	float num1, num2, num3, num4, num5, num6;
	int cont;
	srand(time(NULL));

	for(cont = 0; cont <=1000000; cont++){
		switch(Dado()){
			case 1:
				num1++;
			break;
			
			case 2:
				num2++;
			break;
			
			case 3:
				num3++;
			break;
			
			case 4:
				num4++;
			break;
			
			case 5:
				num5++;
			break;
			
			case 6:
				num6++;
			break;
		}	
	}
	num1=(num1/1000000)*100;
	num2=(num2/1000000)*100;
	num3=(num3/1000000)*100;
	num4=(num4/1000000)*100;
	num5=(num5/1000000)*100;
	num6=(num6/1000000)*100;
	
	printf("Probabilidade de ter saido 1: %f\n", num1);
	printf("Probabilidade de ter saido 2: %f\n", num2);
	printf("Probabilidade de ter saido 3: %f\n", num3);
	printf("Probabilidade de ter saido 4: %f\n", num4);
	printf("Probabilidade de ter saido 5: %f\n", num5);
	printf("Probabilidade de ter saido 6: %f\n", num6);
		
	return 0;
}

int Dado(){
	int num;	
	num=1+(rand() % 6);
	
	return num;
}
