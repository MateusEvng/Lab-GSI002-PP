// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;

    printf("Insira dois numeros: \n");
    printf("Numero A: \n");
    scanf("%d", &a);
    printf("Numero B: \n");
    scanf("%d", &b);

    if (a>b)
    {
        printf("O numero %d eh maior que %d\n", a, b);
    }
    if (a<b)
    {
        printf("O numero %d eh maior que %d\n", b, a);
    }

    return 0;
}