// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float j, m;

    printf("Insira o valor do comprimento em jardas: \n");
    scanf("%f", &j);

    m = j * 0.91;

    printf("%.1f jardas equivalem a %.1f metros\n", j, m);
    
    return 0;

}