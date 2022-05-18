// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float m, l;

    printf("Insira o valor do volume em m3.\n");
    scanf("%f", &m);

    l = 1000 * m;

    printf("%.1f metros cubicos equivalem a %.1f litros\n", m, l);

    return 0;

}