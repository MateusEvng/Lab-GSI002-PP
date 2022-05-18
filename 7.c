// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float c, f;

    printf("Insira a temperatura em graus Fahrenheit para ser convertida em graus Celsius.:\n");
    scanf("%f", &f);

    c = 5 * (f - 32)/9;

    printf("%.1f 'F graus equivalem ah %.1f 'C \n", f, c);

    return 0;

}