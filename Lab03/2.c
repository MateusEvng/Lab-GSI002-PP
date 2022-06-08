// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a;

    printf("Insira um numero: \n");
    scanf("%d", &a);

    if (a>0)
    {
        printf("O inserido eh postivo, a raiz quadrada de %d eh %.2f.\n", a, sqrt(a));
    }
    if (a<0)
    {
        printf("Numero invalido.\n");
    }
    
    return 0;
}