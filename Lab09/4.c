//Joao M Evangelista
/*
4. Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. Elabore funções para: 

   (a) Determinar se eles lados formam um triangulo, sabendo que:   
      • O comprimento de cada lado de um triangulo é menor do que a soma dos outros dois lados. 
   
   (b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:  
      • Chama-se equilátero o triângulo que tem três lados iguais.  
      • Denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais.  
      • Recebe o nome de escaleno o triangulo que tem os três lados diferentes.
*/

#include <stdio.h>

int main(void) {
  
  int count = 3;
  float lado1, lado2, lado3; float lados[count];

  printf("\n\t***TRIANGULO***\n\n");

  for(int i = 0; i < count; i++){

    printf("Insira o Lado %d do Triangulo: ", i+1);
    scanf("%f", &lados[i]);

    while(lados[i] <= 0.0){
      printf("\nO numero inserido é menor que 1.");

      printf("Insira o Lado %d do Triangulo: ", i+1);
      scanf("%f", &lados[i]);
    }
  }

  lado1 = lados[0];
  lado2 = lados[1];
  lado3 = lados[2];

  

  
  return 0;
}