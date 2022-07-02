// João M Evangelista 12011BSI277
/*
1. Escreva  um  trecho  de  código  para  fazer  a  criação  dos  novos  tipos  de  dados  conforme 
solicitado abaixo: 
- Horário: composto de hora, minutos e segundos. 
- Data: composto de dia, mês e ano. 
- Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct horario
{
  int hour;
  int minutes;
  int seconds;
};

struct data
{
  int day;
  int month;
  int year;
};

struct compromisso
{
  char description[150];
  struct data date;
  struct horario time;
};

typedef struct horario Schedule;
typedef struct data Data;
typedef struct compromisso Commitment;

int main(){

  Schedule s;
  Data d;
  Commitment c;

  char resposta;

  //para evitar erros zerar todos os int's.

  s.hour, s.minutes, s.seconds = 0;
  d.day, d.month, d.year = 0;
  
  printf("******Agenda GSI002******\n\n");

  printf("\nQual o dia do comproisso?\n");
  printf("Insira o dia: "); scanf("%d", &d.day);

  //verificação do dia. d.day n pode ser maior que 31.
  while ((d.day > 31) || (d.day < 1))
  {
    printf("\n%d nao eh valido.\n", d.day);
    printf("Deve ser inserido um numero entre 1 e 31\n\n");

    printf("Insira o dia: "); scanf("%d", &d.day);
  }
  
  printf("Mes: "); scanf("%d", &d.month);

  //verificação do mes. d.month n pode ser maior que 12.
  while ((d.month > 12) || (d.month < 1))
  {
    printf("\n%d nao eh valido para mes.\n", d.month);
    printf("Deve ser inserido um numero entre 1 e 12\n\n");

    printf("Insira o mes: "); scanf("%d", &d.month);
  }

  /*
  Verificação do numero de dias de acordo com o mes. Caso d.day for maior que 28 em mês igual a 2
  ou maior que 30 em mês igual a 4, 6, 8, 9, e 11 o algoritmo vai pedir que o usuario insira o numero 
  dentro do intervalo proposto.

  Não ha verificação quanto aos meses de 31 porque é um "senão" e já foi dado configurado anteriormente
  o limite de valor 31 para d.day.
  */

  while ((d.month == 2 && d.day > 28) || ((d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) && d.day > 30 ))
  {
    printf("\n%d nao eh valido para mes %d.\n", d.day, d.month);
    printf("\nDia nao pode ser maior que 30.\n");

    printf("Insira o dia: "); scanf("%d", &d.day);
    printf("Mes: "); scanf("%d", &d.month);
  }

  printf("Ano: "); scanf("%d", &d.year);

  //verificação do ano. no meu algoritmo não será possivel marcação de compromisso caso d.year seja 
  //menor que 2022.

  while (d.year < 2022)
  {
    printf("\nNão eh possivel agendar um compromisso no passado.\n");
    printf("Ano: "); scanf("%d", &d.year);
  }
  
  printf("\nInsira o horario: \n");
  printf("Hora: "); scanf("%d", &s.hour);
  printf("Minuto: "); scanf("%d", &s.minutes);
  printf("\n");

  //ainda não vi uma utilização dos segundos no algoritmo professora

  printf("\nVoce deseja adicionar uma descricao do compromisso?\n");
  printf("Y or N: ");
  scanf(" %c", &resposta);

  switch (resposta)
  {
  case 'Y':
    printf("Digite a descricao: \n");
    setbuf(stdin, NULL);
    scanf("%s", c.description);
    break;
  case 'y':
    printf("Digite a descricao: \n");
    setbuf(stdin, NULL);
    scanf("%s", c.description);
    break;
  case 'N':
    break;
  case 'n':
    break;
  default:
    printf("Y or N: ");
    scanf(" %c", &resposta);
    if ((resposta == 'Y') || (resposta == 'y'))
    {
      printf("Digite a descricao: \n");
      setbuf(stdin, NULL);
      scanf("%s", c.description);
    }
    else{
      break;
    }
    break;
  }

  //impreção do compromisso

  printf("\n***Bilhete de Compromisso***\n\n");
  printf("Data...: %d/%d/%d\n", d.day, d.month, d.year);
  printf("Horario...: %d:%d\n", s.hour, s.minutes);
  printf("Descricao...: %s", c.description);
  
  //corrgir espaço
  //duvida como preencher a estrutra dentro de compromisso.

  return 0;
}
