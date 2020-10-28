#include <stdio.h>
#include <stdbool.h>

bool isPositivo(float num);



int main(){
	printf("%s", isPositivo(0)?"O numero e' positivo\n":"O numero nao e' positivo\n");
	printf("%s", isPositivo(-5)?"O numero e' positivo\n":"O numero nao e' positivo\n");
	printf("%s", isPositivo(4)?"O numero e' positivo\n":"O numero nao e' positivo\n");
    return 0;
}


bool isPositivo(float num){
	return num>=0 ? true : false;
}


