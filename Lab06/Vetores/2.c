#include <stdio.h>

int main(void) {
  
  float array[8];
  int x, y;

  for(int i = 0; i < 8; i++){

    printf("Insira um valor para array[%d]: \n", i);
    scanf("%f", &array[i]);
  }

  printf("\nInsira dois valores: \n");
  printf("Valor X: \n");
  scanf("%d", &x);

  //verificação de X
  if(x < 0 || x > 7){
    do{
      printf("\nNumero inserido eh invalido.\n");
      printf("Deve ser entre 0 e 7\n");
      printf("\nInsira dois valores: \n");
      printf("Valor X: \n");
      scanf("%d", &x);
      } while(x < 0 || x > 7);
  }

  printf("Valor de Y: \n");
  scanf("%d", &y);
  
  //verificação de Y
  if(y < 0 || y > 7){
    do{
      printf("\nNumero inserido eh invalido.\n");
      printf("Deve ser entre 0 e 7\n");
      printf("\nInsira dois valores: \n");
      printf("Valor X: \n");
      scanf("%d", &x);
      } while(x < 0 || x > 7);
  }

  float soma = array[x] + array[y];

  printf("\nPosicao array[%d] e posicao[%d]\n", x, y);
  printf("Soma das poscoes eh: %.2f", soma);

  
  return 0;
}