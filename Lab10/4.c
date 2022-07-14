/*
  4. Crie um programa que contenha uma matriz de float 
  contendo 3 linhas e 3 colunas. Imprima o endereço de cada 
  posição dessa matriz.
*/
#include <stdio.h>

int main(void) {

  int count = 3;
  float mat[count][count]; float *pointer[count][count];

  printf("\n\t****LABORATORIO 10****\n\n");

  for(int i = 0; i < count; i++){
    for(int j = 0; j < count; j++){
      printf("\nInsira um valor para mat[%d][%d]: ", i, j);
      scanf("%f", &mat[i][j]); printf("\n");
    }
  }

  for(int i = 0; i < count; i++){
    for(int j = 0; j < count; j++){
      pointer[i][j] = &mat[i][j];
    }
  }

  for(int i = 0; i < count; i++){
    for(int j = 0; j < count; j++){
      printf("\nEndereco de mat[%d][%d]: %d", i, j, &pointer[i][j]);
      printf("\n");
    }
  }

  
  
  
  return 0;
}