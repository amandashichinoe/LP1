//aula 03-11
#include <stdio.h>
#include <string.h>//necess�rio para strcmp
int main (void)
{
  char str1[4] = "abc";
  char str2[4] = "abc ";
  
  int retorno;
  
  retorno = strcmp(str1, str2);
  printf("retorno = %d\n", retorno);
  //mostra o retorno da fun��o strcmp  
  
  return 0;
}
