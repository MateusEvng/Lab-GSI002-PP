// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float k, l;

    printf("Insira o peso em libras: \n");
    scanf("%f", &l);

    k = l * 0.45;

    printf("%.1f libras equivalem a %.1f quilogramas\n", l, k);

    return 0;

}