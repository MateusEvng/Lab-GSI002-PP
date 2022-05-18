// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float lado;

    printf("Insira o valor de um lado do quadrado para calcular a area.\n");
    scanf("%f", &lado);

    float area = lado * lado;

    printf("A area do quadrado de lado %.1f eh %.2f.\n", lado, area);
    
    return 0;

}