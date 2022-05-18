// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float m, l;

    printf("Insira o valor do volume em litros.\n");
    scanf("%f", &l);

    m = l/1000;

    printf("%.1f litros equivalem a %.4f metros cubicos\n", l, m);

    return 0;

}