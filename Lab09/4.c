//Joao M Evangelista
/*
4. Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando 
as medidas dos três lados de um triângulo. Elabore funções para: 

   (a) Determinar se eles lados formam um triangulo, sabendo que:   
      • O comprimento de cada lado de um triangulo é menor do que a soma dos outros dois lados. 
   
   (b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:  
      • Chama-se equilátero o triângulo que tem três lados iguais.  
      • Denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais.  
      • Recebe o nome de escaleno o triangulo que tem os três lados diferentes.
*/

#include <stdio.h>
#include <stdlib.h>

void formaTriangulo (float l1, float l2, float l3, int *b){

  if (l1 < (l2 + l3))
    *b = 1;
  
  else if(l2 < (l1 + l3))
    *b = 1;

  else if(l3 < (l2 + l1))
    *b = 1;
  
  else
    *b = 0;

}

void tipoTriangulo (float x, float y, float z){

  if((x == y) && (y == z))
    printf("Triangulo Equilatero!\n");

  // a == b b dif c; a == c c dif b;

  else if(((x == y) && (y != z)) || ((x == z) && (z != y)))
    printf("Triangulo Isosceles\n");

  else if((x != y) && (y != z) && (z != x))
    printf("Triangulo Escaleno\n");

  else
    printf("ERRO\n");

}

int main(void) {
  
  int count = 3; int booleano = 0;
  float lado1, lado2, lado3; float lados[count];

  printf("\n\t***TRIANGULO***\n\n");

  for(int i = 0; i < count; i++){

    printf("Insira o Lado %d do Triangulo: ", i+1);
    scanf("%f", &lados[i]);

    while(lados[i] <= 0.0){
      printf("\nO numero inserido eh menor que 1.\n");

      printf("Insira o Lado %d do Triangulo: ", i+1);
      scanf("%f", &lados[i]);
    }
  }

  lado1 = lados[0];
  lado2 = lados[1];
  lado3 = lados[2];

  formaTriangulo(lado1, lado2, lado3, &booleano);
  
  if (booleano == 0)
  {
    printf("\nOs numeros inseridos nao formam um triangulo.\n\n");
  }
  else
  {
    printf("\nO tipo do triangulo: \n\n");
  }

  tipoTriangulo(lado1, lado2, lado3);

  
  
  return 0;
}