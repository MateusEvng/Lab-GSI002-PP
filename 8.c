// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float c, k;

    printf("Insira a temperatura em graus Kelvin para ser convertida em graus Celsius.:\n");
    scanf("%f", &k);

    c = k - 273.15;


    printf("%.1f 'K graus equivalem ah %.1f 'C \n", k, c);

    return 0;

}