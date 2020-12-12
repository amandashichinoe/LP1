//aula 03-11
#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[20] = "Curso";
  	char str2[17] = " de programacao C";
  
    printf("\nTamanho = %i ", strlen(str1));
  
    strncat(str1, str2, 3);
     //concatena a string1 com 15 posições da string2
  
    printf("\nstr1 = %s\n", str1);
    
    printf("\nTamanho = %i ", strlen(str1));
    


	return 0;
	
}
