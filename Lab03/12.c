// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int d;

    printf("Insira um numero inteiro: \n");
    scanf("%d", &d);

    if (d>0)
    {
        printf("\n%d eh positivo, log de %d eh: \n", d, log(d));
    }
    if (d<0)
    {
        printf("Numero invalido, \n");
    }
    

    return 0;

}

   