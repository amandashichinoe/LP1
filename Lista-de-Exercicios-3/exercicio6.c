//Escreva uma fun��o recursiva que determine quantas vezes um d�gito K ocorre em um n�mero natural N. Por exemplo, o d�gito 2 ocorre 3 vezes em 762021192.

int contarK(int K, int N);

int main(){
	
	printf("%i", contarK(2, 762021192));
	printf("\n%i", contarK(3, 833671373));
	
	return 0;
}

int contarK(int K, int N){

	if(N == 0) 
		return 0;

	else			
		return contarK(K , (N/10)) + ((N % 10) == K);
	
}


