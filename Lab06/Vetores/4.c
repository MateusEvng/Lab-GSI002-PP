#include <stdio.h>

int main() {

  float array[5];
  int p_maior, p_menor;
  
  for(int a= 0; a<5; a++){
    printf("Insira um numero para array[%d]: \n", a);
    scanf("%f", &array[a]);

  }
  float maior, menor;
  maior = menor = array[0];
  
  for(int i=1; i<5; i++){
    if(maior > array[i]){
      maior = array[i];
      p_maior = i;
    } 
    if(menor < array[i]){
      menor = array[i];
      p_menor = i;
    } 
  }
  printf("\n%.1f eh o maior valor. Posicao %d.\n", maior, p_maior);
  printf("\n%.1f eh o menor valor. Posicao %d.\n", menor, p_menor);

  
  return 0;
}