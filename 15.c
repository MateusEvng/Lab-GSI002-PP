// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float g, r;
    const float pi = 3.141592;

    printf("Insira um angulo em radiano: \n");
    scanf("%f", &r);

    g = (r * 180)/pi;

    printf("O angulo de %.1f radianos equivale a %.1f graus\n", r, g);

    return 0;

}