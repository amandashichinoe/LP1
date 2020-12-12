#include <stdio.h>
#include <string.h>

int main(){
	
	//string
	char val[1001];
	int i, erro=0;
	
	
	printf("Digite um numero de no maximo 1000 digitos: ");
	scanf("%s", val);
	
	for(i=0; i < strlen(val) ; i++)
	{
		if(val[i] < 48 || val[i] > 57)
		{
			erro = 1;
			break;
		}
	}
	
	if(erro)
	{
		printf("Digite somente digitos!!!!");
	}
	else
	{
		printf("Sucesso!");
	}
	
	
	return 0;
	
}
