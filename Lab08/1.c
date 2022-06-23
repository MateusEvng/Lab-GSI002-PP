#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct horario{

  int hora;
  int minutos;
  int segundos;
};

struct data{

  int dia; int mes; int ano;

};

struct compromisso{

  char texto[100];
  struct data date;
  struct horario time;

};

typedef struct compromisso Compromisso;
typedef struct data Data;
typedef struct horario Horario;

int main(void) {

  Data d; Horario h; Compromisso c; int i = 0;
  
  //entrada da data:
  printf("Insira a data do seu compromisso: \n");
  printf("Dia: \n");
  scanf("%d", &d.dia);

  //while verificador
  while(d.dia > 31){
    printf("\nO numero inserido eh invalido para dia.\n");
    printf("Dia: \n");
    scanf("%d", &d.dia);
  }

  printf("Mes: \n");
  scanf("%d", &d.mes);

  //while verificador
  /*
    1. verificar mes inserido se eh existente
    2. verificar se o dia inserido anteriormente é valido para o mes inserido.
        (abril, junho, setembro e novembro) com 30 dias. 
        (janeiro, março, maio, julho, agosto, outubro e dezembro) com 31 dias [else]
    */
  while((d.mes > 12) || (d.mes < 1)){
    printf("\nO numero inserido eh invalido para mes.\n");
    printf("Mes: \n");
    scanf("%d", &d.mes);
  }

  while((d.dia > 28 && d.mes == 2) || (d.dia > 30 && (d.mes == 4 || d.mes == 6 || d.mes == 9 || d.mes == 11))){
    printf("\nDia %d eh invalido para o mes inserido.\n", d.dia);
    printf("Dia: \n");
    scanf("%d", &d.dia);
  }
  
  printf("Ano: \n");
  scanf("%d", &d.ano);

  //while verificador
  while(d.ano < 2022){
    printf("\nNao eh possivel agendar compromisso em anos ja findados.\n");
    printf("Ano: \n");
    scanf("%d", &d.ano);
  }

  //entrada do horario:

  //entrada do texto:

  printf("\nDigite um texto descrevendo o compromisso: \n");
  gets(c.texto);

  

  

  printf("\nCompromisso agendado para %d/%d/%d!\n", d.dia, d.mes, d.ano);
  
  printf("Descricao: ");
  
  while(c.texto[i] != '\0'){
    printf("%c", c.texto[i]);
    i++;
  }
  printf("\n");
  
  return 0;
}