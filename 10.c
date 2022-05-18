// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float k, m;

    printf("Insira a velocidade em quilometro por hora para ser convertida em metro por segundo.:\n");
    scanf("%f", &k);

    m= k/3.6;

    printf("%.1f quilometros por hora equivalem a %.1f metros por segundo!\n", k, m);

    return 0;

}