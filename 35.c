// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float a, b, h;

    printf("Insira os valores dos catetos A e B: \n");
    printf("Cateto A: \n");
    scanf("%f", &a);
    printf("Cateto B: \n");
    scanf("%f", &b);


    h = sqrt(a * a + b * b);

    printf("A hipotenusa de cateto A sendo %.1f e cateto B sendo %.1f eh: %.2f.\n", a, b, h);


    return 0;

}