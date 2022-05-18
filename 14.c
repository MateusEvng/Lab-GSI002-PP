// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float g, r;
    const float pi = 3.141592;

    printf("Insira um angulo em graus: \n");
    scanf("%f", &g);

    r = (g * pi) / 180;

    printf("O angulo de %.1f graus equivale em %.4f radianos\n", g, r);

    return 0;

}