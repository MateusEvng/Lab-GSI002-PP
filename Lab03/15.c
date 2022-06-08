// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;

    printf("**COMANDO SWITCH**\n");
    printf("Insira um numero e sera retornado o dia da semana equivalente: \n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("DOMINGO\n");
        break;
    
    case 2:
        printf("SEGUNDA-FEIRA\n");
        break;

    case 3:
        printf("TERCA-FEIRA\n");
        break;

    case 4:
        printf("QUARTA-FEIRA\n");
        break;

    case 5:
        printf("QUINTA-FEIRA\n");
        break;

    case 6:
        printf("SEXTA-FEIRA\n");
        break;

    case 7:
        printf("SABADO\n");
        break;

    default:
        printf("Apenas numeros entre 1 e 7!\n");
        break;
    }

    return 0;

}

   