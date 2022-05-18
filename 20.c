// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float k, l;

    printf("Insira o peso em quilogramas: \n");
    scanf("%f", &k);

    l = k/0.45;

    printf("%.2f quilogramas equivalem a %.1f libras\n", k, l);

    return 0;

}