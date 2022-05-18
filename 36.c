// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, r, v;
    float const pi = 3.141592;

    printf("Insira o valor do raio e altura para calculo do volume: \n");
    printf("Raio: \n");
    scanf("%f", &r);
    printf("Altura: \n");
    scanf("%f", &a);

    v = pi * (r * r) * a;

    printf("O volume do cilindo de altura %.1f e raio %.1f eh %.2f.\n", a, r, v);

    return 0;

}