// Questão 2. Faça um programa que leia do usúario o tamanho de uma string e chame uma
// função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o
// conteúdo dessa string. Finalmente imprima a string. Não se esqueça de desalocar a memória
// alocada!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char* ptr; int tamanho = 0;

  printf("\n\tExercicio 2\n\n");

  //ler tamanho string
  printf("Insira o tamanho da String: ");
  scanf("%d", &tamanho);
  printf("\n");

  //alocação
  ptr = (char*) malloc(tamanho*sizeof(char));

  //conteudo string
  printf("\nDigite sua String: ");
  setbuf(stdin, NULL);
  gets(ptr);

  printf("\n");

  //print
  printf("%s", ptr);

  //desalocação
  free(ptr);
  

  

  

  
  return 0;
}