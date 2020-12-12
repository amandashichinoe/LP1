//aula 03-11
#include <stdio.h>
#include <string.h>//necessário para strcmp
int main (void)
{
  char str1[4] = "abc";
  char str2[4] = "abc ";
  
  int retorno;
  
  retorno = strcmp(str1, str2);
  printf("retorno = %d\n", retorno);
  //mostra o retorno da função strcmp  
  
  return 0;
}
