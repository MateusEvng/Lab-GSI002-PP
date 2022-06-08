// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int km, l;

    /*
    menor que 8 Venda o carro! 
    entre 8 e 14 Econômico! 
    maior que 14 Super econômico!
    */

   printf("Insira a distancia em Km: \n");
   scanf("%d", &km);
   printf("Insira a quantidade de litros de gasolina consumidos no percurso: \n");
   scanf("%d", &l);

   if ((km/l) < 8)
   {
       printf("\nVenda o carro!\n");
   }
   else if (((km/l) >= 8) && ((km/l) <=14))
   {
       printf("\nEconomico\n");
   }
   else
   {
       printf("\nSuper economico!\n");
   }
   

    return 0;

}

    