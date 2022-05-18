// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float c, f;

    printf("Insira a temperatura em graus Celsius para ser convertida em graus Fahrenheit.:\n");
    scanf("%f", &c);

    f = c * (9/5) + 32;

    printf("%.1f 'C graus equivalem ah %.1f 'F \n", c, f);

    return 0;


}