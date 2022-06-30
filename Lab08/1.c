//João Mateus Evangelista 12011BSI277
/*
1. Faça uma função que receba a data atual (dia, mês s e ano em inteiro) e exiba-a na tela no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000. 
*/


#include <stdio.h>

void mesExtenso(int x, int y, int z){

  switch(y){
    case 1:
      printf("\n%d de Janeiro de %d\n", x, z);
      break;
    case 2:
      printf("\n%d de Fevereiro de %d\n", x, z);
      break;
    case 3:
      printf("\n%d de Marco de %d\n", x, z);
      break;
    case 4:
      printf("\n%d de Abril de %d\n", x, z);
      break;
    case 5:
      printf("\n%d de Maio de %d\n", x, z);
      break;
    case 6:
      printf("\n%d de Junho de %d\n", x, z);
      break;
    case 7:
      printf("\n%d de Julho de %d\n", x, z);
      break;
    case 8:
      printf("\n%d de Agosto de %d\n", x, z);
      break;
    case 9:
      printf("\n%d de Setembro de %d\n", x, z);
      break;
    case 10:
      printf("\n%d de Outubro de %d\n", x, z);
      break;
    case 11:
      printf("\n%d de Novembro de %d\n", x, z);
      break;
    case 12:
      printf("\n%d de Dezembro de %d\n", x, z);
      break;
    default:
      printf("\nERRO\n\n");
  }
  
}

int main(void) {

  int dia, mes, ano;

  printf("\n\t****DATA****\n\n");
  printf("\nInsira o dia: ");
  scanf("%d", &dia);
  printf("\n");
  
  while ((dia > 31) || (dia < 1))
  {
    printf("\n%d nao eh valido.\n", dia);
    printf("Deve ser inserido um numero entre 1 e 31\n\n");

    printf("\nInsira o dia: "); scanf("%d", &dia);
  }

  printf("\nInsira o mes: ");
  scanf("%d", &mes);
  printf("\n");
  
  while ((mes > 12) || (mes < 1))
  {
    printf("\n%d nao eh valido para mes.\n", mes);
    printf("Deve ser inserido um numero entre 1 e 12\n\n");

    printf("\nInsira o mes: "); scanf("%d", &mes);
  }

  while ((mes == 2 && dia > 28) || ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30 ))
  {
    printf("\n%d nao eh valido para mes %d.\n", dia, mes);
    printf("\nDia nao pode ser maior que 28 para Fevereiro ou 30 para Abril, Junho, Setembro e Novembro.\n");

    printf("Insira o dia: "); scanf("%d", &dia);

    while ((dia > 31) || (dia < 1))
  {
    printf("\n%d nao eh valido.\n", dia);
    printf("Deve ser inserido um numero entre 1 e 31\n\n");

    printf("\nInsira o dia: "); scanf("%d", &dia);
  }
    
    printf("Mes: "); scanf("%d", &mes);

    while ((mes > 12) || (mes < 1))
  {
    printf("\n%d nao eh valido para mes.\n", mes);
    printf("Deve ser inserido um numero entre 1 e 12\n\n");

    printf("\nInsira o mes: "); scanf("%d", &mes);
  }
    
  }

  printf("\nInsira o ano: ");
  scanf("%d", &ano);
  printf("\n");

  mesExtenso(dia, mes, ano);
  
  
  return 0;
}
