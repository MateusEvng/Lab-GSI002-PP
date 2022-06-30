//Joao Mateus Evangelista
/*
3. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2.  
*/
#include <stdio.h>
#include <stdlib.h>

void avarage(float a, float b, float c, char d){

  float aritmetica = (a + b + c)/3.0;

  float ponderada = ((a*5.0) + (b*3.0) + (c*2.0))/(5.0+3.0+2.0);

  switch(d){
    case 'A':
      printf("\nA media Aritmetica de suas notas: %.2f\n", aritmetica);
      break;
    case 'P':
      printf("\nA media ponderada de suas notas: %.2f\n", ponderada);
      break;
    default:
      printf("\nChar incorreto\n");
      break;
  }
  
}

int main(void) {

  float nota1, nota2, nota3;
  char c;

  printf("\n\t****ESCOLA GSI002****\n\n");

  printf("Insira sua nota: \n");
  printf("Nota 1\n");
  scanf("%f", &nota1);

  printf("Nota 2\n");
  scanf("%f", &nota2);
  
  printf("Nota 3\n");
  scanf("%f", &nota3);

  printf("\nDigite a media que deseja calcular: ");
  setbuf(stdin, NULL);
  scanf(" %c", &c);
  printf("\n");

  avarage(nota1, nota2, nota3, c);
  
  
  return 0;
}