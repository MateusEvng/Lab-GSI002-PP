//João M Evangelista
/*
2. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a 
informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{

  char name[100];
  char student_id[16];
  char course[100];

};

typedef struct aluno Student;

int main(void) {

  int count, i, j;
  count = 5;
  Student s[count]; //vetor de 5 posições

  printf("***ESCOLA GSI002***\n\n");


  //entrada de dados

  for (i = 0; i < count; i++)
  {
    printf("Insira seu nome: \n");
    setbuf(stdin, NULL);
    scanf("%s", &s[i].name);

    printf("\nInsira seu numero de matricula: \n");
    printf("XXX.XXX.XXX-YY\n");
    setbuf(stdin,NULL);
    scanf("%s", &s[i].student_id);

    printf("\nInsira o seu curso: \n");
    setbuf(stdin, NULL);
    scanf("%s", &s[i].course);

    printf("\n");
  }

  printf("\n");


  for (j = 0; j < count; j++)
  {
    printf("Aluno %d: \n", j+1);

    //imprime nome
    printf("Nome: %s\n", s[j].name);

    //imprime matricula
    printf("Matricula: %s\n", s[j].student_id);

    //imprime curso
    printf("Curso: %s\n", s[j].course);

    printf("\n");
  }
  
  return 0;
}