// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int ano;

    printf("Insira um ano para sabermos se eh bissexto: \n");
    scanf("%d", &ano);

    if ((ano %400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("\nO ano %d eh bissexto.\n", ano);
    }
    else
    {
        printf("\nO ano %d nao eh bissexto.\n", ano);
    }
    



    return 0;

}

   