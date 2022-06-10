#include <stdio.h>

int main(void) {

  int array[6];
  int contador = 0; //conta impar
  int soma = 0; //soma pares
  
  //percorrer array
  for(int i = 0; i<6; i++){
    printf("Insira um valor para array[%d]: \n",i);
    scanf("%d", &array[i]);
  }

  printf("\n");

  //verificar pares
  for(int p = 0; p< 6; p++){
    if(array[p]%2 == 0){
      printf("%d(par); ", array[p]);
      soma = soma + array[p];
    }
  }

  printf("\nA soma dos numeros pares eh igual ah: %d.\n\n", soma);

  //verificar impares
  for(int p = 0; p< 6; p++){
    if(array[p]%2 != 0){
      printf("%d(impar); ", array[p]);
      contador ++;
    }
  }

  printf("\nTotal de numeros impares: %d.\n", contador);

  return 0;

}