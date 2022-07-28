// Questão 3. Faça um programa para armazenar em memória um array de dados contendo
// 1500 valores do tipo int usando a função de alocação dinâmica de memória calloc. Após,
// faça um loop e verifique se o array contém realmente os 1500 valores inicializados com zero
// (conte os 1500 zeros do array).

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  
  int tamanho = 1500;
  int count = 0;

  int* ptr;

  //alicação
  ptr = (int*) calloc(tamanho, sizeof(int));

  //conferencia
  for(int i = 0; i < tamanho; i++){
    if(ptr[i] == 0){
      count ++;
      printf("Possicao array[%d] possui zero.\n", i);
      }
    else
      break;
  }

  //desalocação
  free(ptr);

  
  return 0;
}