/*
  2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba:
    a) o maior endereço.
    b) o conteúdo do maior endereço.
*/

#include <stdio.h>

int main(void) {
  
  int b, a = 0;

  printf("\nInsira um valor para A: ");
  scanf("%d", &a); printf("\n");

  printf("Insira um valor para B: ");
  scanf("%d", &b); printf("\n");

  int *pointer_a = &a;
  int *pointer_b = &b;

  if(&pointer_a > &pointer_b)
    printf("\nMaior endereco eh %d e seu conteudo %d.\n", &pointer_a, *pointer_a);

  else
    printf("\nMaior endereco eh %d e seu conteudo %d.\n", &pointer_b, *pointer_b);
    

  
  return 0;
}