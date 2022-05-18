// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float c,p;

    printf("Insira um comprimento em polegadas\n");
    scanf("%f", &p);

    c = p * 2.54;

    printf("%.1f polegadas equivalem a %.1f centimetros\n", p, c);

    return 0;

}