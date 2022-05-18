// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float m, h;

    printf("Insira o valor da area em metros quadrados: \n");
    scanf("%f", &m);
    
    h = m * 0.0001;

    printf("%.1f metros quadrados equivalem a %.1f hectares. \n", m, h);
    
    return 0;

}