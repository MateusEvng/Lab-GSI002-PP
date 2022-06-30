//Joao Mateus Evangelista 12011BSI277
/*
2. Faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos e segundos, e os converta em segundos.
*/
#include <stdio.h>

void seconds(int h, int m, int s){

  int temp;
  
  temp = ( h * (60 * 60));

  temp = temp + (m * 60);

  temp = temp + s;

  printf("\n\n%d hora(s) e %d minuto(s) e %d segundos equivalem ah %d segundos!\n", h, m, s, temp);
  
  
}

int main(void) {
  
  int hora, minuto, segundos;
  
  /*
    minuto eh hora * 60
    segundos eh minuto * 60
  */

  printf("Insira q quantidade de horas: \n");
  scanf("%d", &hora);

  printf("Insira a quantidade de minutos: \n");
  scanf("%d", &minuto);

  printf("Insira a quantidade de segundos: \n");
  scanf("%d", &segundos);

  
  seconds(hora, minuto, segundos);
  
  
  return 0;
}