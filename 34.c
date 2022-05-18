// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float r;
    float const pi = 3.141592;

    printf("Para calcular a area do circulo insira o valor do raio: \n");
    scanf("%f", &r);


    float area = pi * (r * r);

    printf("A area do circulo de raio %.1f eh %.2f,\n", r, area);

    return 0;

}