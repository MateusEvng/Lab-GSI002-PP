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
        printf("O quadrado de %.1f eh %.2f, a raiz de %.1f eh %.2f!\n",a ,(a*a), a, sqrt(a));
    }
    if (a<0)
    {
        printf("erro.\n");
    }
    
    return 0;
}