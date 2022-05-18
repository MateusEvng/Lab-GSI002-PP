// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float k, m;

    printf("Insira a velocidade em metro por segundo para ser convertida em quilometro por hora.:\n");
    scanf("%f", &m);

    k = m * 3.6;

    printf("%.1f metros por segundo equivalem a %.1f quilometros por hora!\n", m, k);

    return 0;

}