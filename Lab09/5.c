//Joao Mateus 12011bsi277
/*
5. Faça uma função chamada ‘simplifica’ que recebe como parâmetro o numerador e o denominador de uma 
fração. Esta função deve simplificar a fração recebida dividindo o numerador e o denominador pelo maior 
fator possível. Por exemplo, a fração 36/60 simplifica para 3/5 dividindo o numerador e o denominador 
por 12. A função deve modificar as variáveis passadas como parâmetro. *finalizar*
*/

void simplifica (int a, int b){

  int resto, mdc = 0, temp_a, temp_b;

   /* dados a e b numeros int e positivos enquanto b
  for diferente de 0, repita 
    
    resto = resto da divisão entre a e b.
    a = b
    b = resto
    mdc = a */

  temp_a = a;
  temp_b = b;
  
  while(b > 0){

    resto = (a % b);
    a = b;
    b = resto;
    mdc = a;
    
  }
  temp_a = (temp_a / mdc);
  temp_b = (temp_b / mdc);
  
  printf("\nFracao simplificada: %d/%d.", a, b);
}

#include <stdio.h>
#include <stdlib.h>

void simplifica (int n, int d);

int main (){

  int numerador, denominador = 0;
  
  printf("\n\t****CALCULADORA****\n\n");

  printf("Insira o Numerador: ");
  scanf("%d", &numerador);

  printf("Insira o Denominador: ");
  scanf("%d", &denominador);
  printf("\n");

  printf("\nFracao inserida: %d/%d.\n", numerador, denominador);

  simplifica(numerador, denominador);
    
    return 0;
}
