//João M Evangelista 12011bsi277
/*
3. Crie  uma  estrutura  representando  os  alunos  de  um  determinado  curso.  A  estrutura  deve 
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota 
da terceira prova. 
(a) Permita ao usuário entrar com os dados de 5 alunos. 
(b) Encontre o aluno com maior nota da primeira prova. 
(c) Encontre o aluno com maior média geral. 
(d) Encontre o aluno com menor média geral 
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para 
aprovação.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    char student_id[20];
    char student_name[50];
    float test1;
    float test2;
    float test3;
};

typedef struct aluno Student;

int main(){

    int count = 2;
    Student estudante[count];

    float mediaGeral[count];
    //aprovado mediaGeral >= 6.

    printf("****ESCOLA GSI002****");
    printf("\nInsira os seus dados para gerar o boletim: \n\n");

    //(a) Permita ao usuário entrar com os dados de 5 alunos.
    for (int i = 0; i < count; i++)
    {
        printf("\tCONSULTA %d\n", i+1);

        /*printf("\nNome...:\n");
        setbuf(stdin,NULL);
        scanf("%s", &estudante[i].student_name);*/

        /*printf("\nInsira seu numero de matricula: \n");
        printf("XXX.XXX.XXX-YY\n");
        setbuf(stdin,NULL);
        scanf("%s", &estudante[i].student_id);*/

        printf("\nNota da Prova 1: \n");
        scanf("%f", &estudante[i].test1);

        printf("\nNota da Prova 2: \n");
        scanf("%f", &estudante[i].test2);

        printf("\nNota da Prova 3: \n");
        scanf("%f", &estudante[i].test3);

        printf("\n\tprocessando...\n\n");
    }

    for (int i = 0; i < count; i++)
    {
        printf("\n\tcalculando a media...\n");

        mediaGeral[i] = (estudante[i].test1 + estudante[i].test2 + estudante[i].test3)/3.0;

        printf("\n\tmedia %d calculada...\n", i+1);

    }

    //(b) Encontre o aluno com maior nota da primeira prova.

    /*
    Para isso devo associar a posição da maior nota com o nome da posição correspondente.
    
    se a maior nota em test1 é do estudante[2] então devo imprimir que a maior nota é do
    estuante[2].student_name.
    */




    


    

    return 0;
}