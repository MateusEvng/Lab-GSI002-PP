// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
//Exercicio feito após a entrega do lab

#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        1h = 60 min
        1 min = 60s

        1 h = 60s*60s = 3600s

    */

   int hora, minuto, segundo, segundo_entrada, show = 0;

   printf("***RELOGIO***\n\n");
   printf("Insira a quantidade de segundos: \n");
   scanf("%d", &segundo_entrada);

   show = segundo_entrada;

   // hora = 216000 segundos

   hora = segundo_entrada / 3600;
   segundo_entrada = segundo_entrada % 3600;

   minuto = segundo_entrada / 60;
   segundo_entrada = segundo_entrada % 60;

   segundo = segundo_entrada;

   printf("\nEntrada: %d segundos.\n\n", show);

   printf("%d horas, %d minutos e %d segundos.\n", hora, minuto, segundo);


    return 0;

}