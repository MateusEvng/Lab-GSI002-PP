/*
  1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,real, e char. 
Associe as variáveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros. 
Imprima os valores das variáveis antes e após a modificação.
*/

#include <stdio.h>

int main(void) {
  
  printf("\n\t****LABORATORIO 10****\n\n");

  int a;
  float b;
  char c;

  printf("Insira um numero inteiro: ");
  scanf("%d", &a);
  printf("\n");

  printf("Insira um numero real: ");
  scanf("%f", &b);
  printf("\n");

  printf("Insira um char: ");
  scanf(" %c", &c);
  printf("\n");

  printf("\nINTEIRO: \n");
  printf("Nao modificado: %d\n", a);

  printf("\nREAL: \n");
  printf("Nao modificado: %.3f\n", b);

  printf("\nCHAR: \n");
  printf("Nao modificado: %c\n", c);

  //declaração do ponteiro
  int *pointer_a = NULL;
  float *pointer_b = NULL;
  char *pointer_c = NULL;
  
  //associação do ponteiro com a variável
  pointer_a = &a;
  pointer_b = &b;
  pointer_c = &c;

  //modificação
  *pointer_a = a + 100;
  *pointer_b = b + 9.97;
  *pointer_c = 'z';

  printf("\n\t********\n");
  
  printf("\nINTEIRO: \n");
  printf("Modificado: %d\n", *pointer_a);

  printf("\nREAL: \n");
  printf("Modificado: %.3f\n", *pointer_b);

  printf("\nCHAR: \n");
  printf("Modificado: %c\n", *pointer_c);

  return 0;
}