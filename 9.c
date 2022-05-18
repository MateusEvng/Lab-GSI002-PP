// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float c, k;

    printf("Insira a temperatura em graus Celsius para ser convertida em graus Kelvin.:\n");
    scanf("%f", &c);

    k = c + 273.15;


    printf("%.1f 'C graus equivalem ah %.1f 'K \n", c, k);

    return 0;

}