// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float c,p;

    printf("Insira um comprimento em centimetros\n");
    scanf("%f", &c);

    p = c/2.54;

    printf("%.1f centimetros equivalem a %.1f podelgadas\n", c, p);

    return 0;

}