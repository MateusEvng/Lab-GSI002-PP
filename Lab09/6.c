//Joao Mateus 12011BSI277
/*
6. Faça uma função que receba como parâmetro um vetor X de 3
elementos inteiros e retorne, também por parâmetro, dois vetores
A e B. O vetor A deve conter os elementos pares de X
e o vetor B, os elementos ímpares.*/

#include <stdio.h>
#include <stdlib.h>

void parImpar(int array[3], int par[3], int impar[3]){

  int t_a, t_b = 0;

  for(int i = 0; i < 3; i++){

  if(array[i]%2 == 0){
    par[i] = array[i];
    t_a ++;
  }
  }

  for(int i = 0; i < 3; i++){

  if(array[i]%2 != 0){
    impar[i] = array[i];
    t_b ++;
  }
    
  }

  for(int i= 0; i < t_a; i++){
    printf("\nPar %d ", par[i]);
  }

  for(int i = 0; i < t_b; i ++){
    printf("\nImpar%d ", impar[i]);
  }
  
}

int main(){

  int x[3]; int a[3]; int b[3];

  for(int i = 0; i < 3; i++){

    printf("Insira um valor para array[%d]: ", i);
    scanf("%d", &x[i]);
    printf("\n");
    
  }

  parImpar(x, a, b);
  
  
  return 0;
}
