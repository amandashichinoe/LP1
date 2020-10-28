/*8. Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena. O sorteio consiste na extração de 6 números diferentes, no universo de 01 a 60.
   A seguir, ler um vetor B de 10 elementos contendo uma aposta.
   Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos), a quina (5 acertos) ou a quadra (4 acertos). */
#include <stdio.h>
#define GABARITO 6
#define APOSTA 10

int main(){
	int A[GABARITO], B[APOSTA], i, j, numero, acertos=0, repete;
	
	for(i=0; i < GABARITO ; i++){
		
		//Validando a entrada
		do{
			printf("Digite o gabarito (1 a 60) da Mega-Sena: ");
			scanf("%i", &A[i]);
			//verifica se o numero esta dentro do intervalo pedido
			if(A[i] < 1 || A[i] > 60){
				printf("\nErro. Digite um valor valido (1 a 60)!\n)");
			}
			else{
				repete = 0;
				for(j=0; j < i; j++){
					if(A[i] ==A[j]){
						printf("Numero ja digitado!\n");
						repete = 1;
						break;
					}
				}
			}
		}while (A[i] < 1 || A[i] > 60 || repete ==1);
	}
	
	for(i=0; i < APOSTA ; i++){
		
		do{
			printf("Digite a aposta (1 a 60) da Mega-Sena: ");
			scanf("%i", &B[i]);
			//verifica se o numero esta dentro do intervalo pedido
			if(B[i] < 1 || B[i] > 60){
				printf("\nErro. Digite um valor valido (1 a 60)!\n)");
			}
			else{
				repete = 0;
				for(j=0; j < i; j++){
					if(B[i] ==B[j]){
						printf("Numero ja digitado!\n");
						repete = 1;
						break;
					}
				}
			}
		}while (B[i] < 1 || B[i] > 60 || repete ==1);
	}
	
	//Processamento
	for(i=0; i< APOSTA; i++){
		numero = B[i];
	
		for(j=0; j < GABARITO; j++){
			if(A[j] == numero){
				acertos++;
			}
		}
	}
	
	//Saida
	printf("Total de Acertos: %i", acertos);
	
	switch (acertos){
		case 6:	printf("\nVoce fez a sena");	break;
		case 5:	printf("\nVoce fez a quina");	break;
		case 4:	printf("\nVoce fez a quadra");	break;
		default:printf("\nVoce nao fez pontos");break;
	}

	return 0;
}

