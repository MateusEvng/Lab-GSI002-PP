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

  int count = 5; int i, j = 0; int p1, p2, p3;
  Student s[count]; //vetor de 5 posições

  setbuf(stdin, NULL);
  scanf("%s", &s[1].name);

  /*while(i < count){
    printf("Insira dos dados do Aluno %d: \n", (i+1));
    printf("Nome: \n");
    setbuf(stdin, NULL);
    scanf("%s", &s[count].name); */
/*
    printf("Numero de matricula: \n");
    printf("Modelo: 000.000.000-00\n");
    setbuf(stdin, NULL);
    gets(s[count].student_id);

    printf("Curso: \n");
    setbuf(stdin, NULL);
    gets(s[count].course);
   
    i++;
  }
*/
  /*while(j<1){
    //Print 1: Nome [p1];
    printf("\nAluno %d: ", j+1);*/
    for(p1 = 0; s[1].name[p1] != '\0'; p1++){
      printf("Nome: %s.\n", s[1].name[p1]);
    }


/*    j++;
  }*/

  
  
  return 0;
}