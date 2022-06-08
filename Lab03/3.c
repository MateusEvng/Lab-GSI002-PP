// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float a;

    printf("Insira um numero: \n");
    scanf("%f", &a);

    if (a>0)
    {
        printf("O quadrado de %.1f eh %.2f!\n", a, sqrt(a));
    }
    if (a<0)
    {
        printf("%.1f ao quadrado eh %.2f!\n", a, (a*a));
    }
    
    return 0;
}