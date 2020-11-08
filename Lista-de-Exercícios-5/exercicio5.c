/*5. Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. 
Use aritmética de ponteiros para acessar os caracteres  das strings.*/

#include<stdio.h>

void compararString(char *str1, char *str2);
int verifTam (char*str);

int main(){
	char *str1 = "fatec sorocaba";
	char *str2 = "cab";
	
	compararString(str1, str2);

	return 0;	
}

void compararString(char *ptr1, char *ptr2){
	int i, cont=0;
	int tamStr1 = verifTam(ptr1);
    int tamStr2 = verifTam(ptr2);
	
	for(i=0;i<tamStr1;i++){
		
		if(*ptr1==*ptr2){
			printf("%c %c\n", *ptr1, *ptr2);
			cont+=1;
			*ptr1++;
			*ptr2++;
			
			if(cont == tamStr2){
				printf("A string 2 ocorre dentro da string 1");
				break;	
			}	
		}
		
		else{
			printf("%c %c \n", *ptr1, *ptr2);	
			if(i>0 && cont!=0)
				*ptr2--;
				
			cont=0;
			*ptr1++;
		}
	}
	
	if(cont != tamStr2)
		printf("A string 2 nao ocorre dentro da string 1");
}

int verifTam (char*str){
    int tam = 0;

    while (*str != '\0')
    {
        tam++;
        str++;
    }

    return tam;
}

