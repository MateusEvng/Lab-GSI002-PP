// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;

    printf("Insira sua idade: \n");
    scanf("%d", &i);

    if (i == 5 && i <= 7)
    {
        printf("\nInfantil A\n");
    }
    else if (i >= 8 && i <= 10)
    {
        printf("\nInfantil B\n");
    }
    else if (i >= 11 && i <= 13)
    {
        printf("\nJuvenil A\n");
    }
    else if (i >= 14 && i <= 17)
    {
        printf("\nJuvenil B\n");
    }
    else
    {
        printf("\nSenior\n");
    }
    

    return 0;

}

   