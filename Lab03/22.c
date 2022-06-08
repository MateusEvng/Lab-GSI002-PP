// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, t;

    printf("Ola Sr. Trabalhador.\n\n");
    printf("Insira a sua idade: \n");
    scanf("%d", &i);
    printf("Insira seu tempo de servico: \n");
    scanf("%d", &t);

    /*
    IFS:
        Ter pelo menos 65 anos; 
        Ou ter trabalhado pelo menos 30 anos; 
        Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
    */

   if ((i >= 65) || (t >= 30) || (i >= 60 && t >= 25))
   {
       printf("\nVoce pode aposentar.\n");
   }
   else
   {
       printf("\nVoce nao pode aposentar.\n");
   }
   
    return 0;

}

   