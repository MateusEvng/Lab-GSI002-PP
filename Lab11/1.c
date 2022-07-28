// Questão 1. Faça um programa que leia do usúario o tamanho de um array a ser lido e faça
// a alocação de memória. Em seguida, leia do usuário seus valores e imprima o array lido.
// Não se esqueça de desalocar a memória alocada!


#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int tamanho; int array;
  printf("\n\tExercicio 1\n\n");

  //ler do usuario o tamanho do array
  printf("Insira o tamanho do Array: ");
  scanf("%d", &tamanho);
  printf("\n");

  printf("\nArray tera tamanho %d\n\n", tamanho);

  //alocar a memoria
  int* p = (int*) malloc(tamanho*sizeof(int));

  //ler do usuario os valores
  for(int i = 0; i < tamanho; i++){
    printf("Insira um valor para array[%d]: ", i);
    scanf("%d", &p[i]);
  }

  printf("\n");
  
  //print
  for(int i = 0; i < tamanho; i++){
    printf("Posicao array[%d] = %d\n", i, p[i]);
  }

  //desalocação
  free(p);
  
  return 0;
}