#include <stdio.h>
#include <stdbool.h>

bool isNulo(float a);

int main(){
	printf("%s", isNulo(0)?"O numero e' nulo\n":"O numero nao e' nulo\n");
	printf("%s", isNulo(-5)?"O numero e' nulo\n":"O numero nao e' nulo\n");
	printf("%s", isNulo(4)?"O numero e' nulo\n":"O numero nao e' nulo\n");
    return 0;
}

bool isNulo(float a){
  return a == 0 ? true : false;
}


