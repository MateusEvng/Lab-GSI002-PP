// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float m, h;

    printf("Insira o valor da area em hectares: \n");
    scanf("%f", &h);
    
    m = h * 10000;

    printf("%.1f hectares equivalem a %.1f metros quadrados. \n", h, m);
    
    return 0;

}