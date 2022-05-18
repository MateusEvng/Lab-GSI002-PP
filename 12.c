// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float k, m;

    printf("Insira uma distancia em milhas: \n");
    scanf("%f", &m);

    k = m * 1.61;

    printf("%.1f milhas equivalem a %.1f quilometros", m, k);
    
    return 0;

}