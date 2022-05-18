// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float k, m;

    printf("Insira uma distancia em quilometros: \n");
    scanf("%f", &k);

    m = k/1.61;

    printf("%.1f quilometros equivalem a %.1f milhas", k, m);
    
    return 0;

}