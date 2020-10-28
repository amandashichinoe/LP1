//Escreva uma função recursiva que gere todas as possíveis combinações para um jogo da MegaSena com 6 dezenas
#include <stdio.h>
#include <stdbool.h>
#define TAM 6
#define NUM 60
int aposta[TAM];

void possApostas(int x);

int main(){
	possApostas(0);
	
	return 0;
}

void possApostas(int x){
	if(x==TAM){
		int j,k;
		bool iguais = false;
		
		for(j = 0; j<TAM; j++){
			for (k = j +1; k<TAM; k++){
				if(aposta[j] == aposta [k])
				iguais = true;	
			}	
		}
		
		if(!iguais){
			for(j=0; j < TAM; j++){
				printf("%i ", aposta[j]);
			}
			printf("\n");
		}
	}
	else{
		int i;
		for (i=1; i<=NUM; i++){
			aposta[x] = i;
			possApostas(x + 1);
		}	
	}
}
