// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, m;

    printf("Insira o valor da area em metros quadrados: \n");
    scanf("%f", &m);

    a = m * 0.000247;

    printf("%.2f metros quadrados equivalem a %.5f acres.\n", m, a);
    

    return 0;

}