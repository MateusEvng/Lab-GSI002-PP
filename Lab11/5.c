// Questão 5. Crie um programa que declare uma estruture para cadastro de alunos, sendo
// que:
// • deverão ser armazenados, para cada aluno, matrícula, sobrenome e ano de nascimento;
// 1
// • ao início do programa, o usuário deverá informar o número de alunos que serão armazenados;
// • o programa deverá alocar dinamicamente a quantidade necessária de memória para
// armazenar os registros dos alunos; e
// • ao final, mostrar os dados armazenados e liberar a memória alocada.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declaração de estrutura
struct aluno{
  char name[100];
  char id_student[15];
  char birth[12];
};

typedef struct aluno Student;

int main(void) {

  Student estudante;
  Student* ptr;
  int tamanho = 0;

  //entrda do numero de alunos a serem armazenados
  printf("\n\tExercicio 5\n\n");

  printf("Insira a quantidade de alunos a serem cadastrados: ");
  scanf("%d", &tamanho);
  printf("\n");

  //alocação
  ptr = (Student*) malloc(tamanho*sizeof(Student));

  printf("\n");

  for(int i = 0; i < tamanho; i++){
    printf("Aluno %d\n", i+1);

    printf("Nome: \n");
    setbuf(stdin, NULL);
    gets(ptr[i].name);

    printf("Matricula: \n");
    setbuf(stdin, NULL);
    gets(ptr[i].id_student);

    printf("Data de Nascimento: dd/mm/aaaa\n");
    setbuf(stdin, NULL);
    gets(ptr[i].birth);
  }

  printf("\n");

  //print
  for(int i = 0; i < tamanho; i++){
    printf("Aluno %d\n", i+1);

    printf("Nome: %s\n", ptr[i].name);

    printf("Matricula: %s\n", ptr[i].id_student);
    
    printf("Data de Nascimento: %s\n", ptr[i].birth);
  }

  free(ptr);
  
  
  
  return 0;
}