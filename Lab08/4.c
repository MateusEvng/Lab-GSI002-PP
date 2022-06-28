//João M Evangelista 12011bsi277
/*
4. Faça um programa que armazene em um registro de dados (estrutura composta) os dados 
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de 
Nascimento,  Código  do  Setor  onde  trabalha  (0-99),  Cargo  que  ocupa  (string  de  até  30 
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura 
e exibidos na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data_de_nascimento
{
    int day;
    int month;
    int year;
};


struct funcionario
{
    char worker_name[50];
    int worker_age;
    char worker_gender;
    char worker_cpf;
    int worker_sectionId;
    char worker_position[30]; 
    float worker_salary;

    struct data_de_nascimento worker_birth;
};

typedef struct funcionario Worker;


int main(){

    Worker colaborador;

    printf("\t***GSI002 PROGRAMACAO PROCEDIMENTAL LTDA***\n");

    printf("\nBem-vindo(a) Colaborador(a)!\n");
    printf("Insira seus dados para impressao do atestado de trabalho: \n");

    printf("Dados do Servico: \n\n");

    printf("Nome...: ");
    setbuf(stdin,NULL);
    scanf("%s", &colaborador.worker_name);
    printf("\n");

    printf("CPF...: XXX.XXX.XXX-YY\n");
    printf("CPF...: "); 
    setbuf(stdin,NULL);
    scanf("%s", &colaborador.worker_cpf);
    printf("\n");

    printf("Codigo do seu Setor...: ");
    scanf("%d", &colaborador.worker_sectionId);
    printf("\n");

    //verificador de numero inserido (0-99);

    printf("Cargo...: ");
    setbuf(stdin,NULL);
    scanf("%s", &colaborador.worker_position);
    printf("\n");

    printf("Dados Pessoais: \n\n");

    printf("Idade...: ");
    scanf("%d", &colaborador.worker_age);
    printf("\n");

    printf("Genero...: ");
    setbuf(stdin,NULL);
    scanf(" %c", &colaborador.worker_gender);
    printf("\n");

    //verificador
    /*while ((colaborador.worker_gender != 'm') || (colaborador.worker_gender != 'M') || (colaborador.worker_gender != 'F') || (colaborador.worker_gender != 'f'))
    {
        printf("\nGenero inserido eh invalido!!\n");
        printf("Genero...: ");
        setbuf(stdin,NULL);
        scanf(" %c", &colaborador.worker_gender);
        printf("\n");
    }*/
    
    printf("Data de nascimento...: \n");
    printf("Dia...: ");
    scanf("%d", &colaborador.worker_birth.day); 
    printf("\n");

    //verificação do dia. colaborador.worker_birth.day n pode ser maior que 31.
    while ((colaborador.worker_birth.day > 31) || (colaborador.worker_birth.day < 1))
    {
        printf("\n%d nao eh valido.\n", colaborador.worker_birth.day);
        printf("Deve ser inserido um numero entre 1 e 31\n\n");

        printf("Insira o Dia: "); scanf("%d", &colaborador.worker_birth.day);
    }

    printf("Mes...: ");
    scanf("%d", &colaborador.worker_birth.month); 
    printf("\n");

    //verificação do mes. colaborador.worker_birth.month n pode ser maior que 12.
    while ((colaborador.worker_birth.month > 12) || (colaborador.worker_birth.month < 1))
    {
        printf("\n%d nao eh valido para mes.\n", colaborador.worker_birth.month);
        printf("Deve ser inserido um numero entre 1 e 12\n\n");

        printf("Insira o Mes: "); scanf("%d", &colaborador.worker_birth.month);
    }

    printf("Ano...: ");
    scanf("%d", &colaborador.worker_birth.year);
    printf("\n");

    printf("Dados Financeiros: \n\n");

    printf("Salario...: ");
    scanf("%f", &colaborador.worker_salary);
    printf("\n");

    //impressao

    printf("\n\n****ATESTADO DE TRABALHO****\n\n");

    printf("Nome...: %s\n", colaborador.worker_name);
    printf("Data de Nascimento...: %d/%d/%d\n", colaborador.worker_birth.day, colaborador.worker_birth.month, colaborador.worker_birth.year);
    printf("Idade...: %d anos\n", colaborador.worker_age);
    printf("CPF...: %s\n", colaborador.worker_cpf);
    
    if ((colaborador.worker_gender == 'M') || (colaborador.worker_gender == 'm'))
    {
        printf("Genero...: Masculino\n");
    }
    if ((colaborador.worker_gender == 'F') || (colaborador.worker_gender == 'f'))
    {
        printf("Genero...: Feminino\n");
    }

    printf("\n");

    printf("Cargo...: %s", colaborador.worker_position);
    printf("Setor...: %d", colaborador.worker_sectionId);
    printf("Salario...: R$%.2f\n", colaborador.worker_salary);
    printf("\n");
    










    return 0;
}