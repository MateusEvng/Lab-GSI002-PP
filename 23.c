// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float j, m;

    printf("Insira o valor do comprimento em metros: \n");
    scanf("%f", &m);

    j = m/0.91;

    printf("%.1f metros equivalem a %.1f jardas\n", m, j);
    
    return 0;

}