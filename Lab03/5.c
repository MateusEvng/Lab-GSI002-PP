// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;

    printf("Insira um numero: \n");
    scanf("%d", &i);

    if (i%2==0)
    {
        printf("%d eh par!\n", i);
    }
    else{
        printf("%d eh impar!\n", i);
    }

    return 0;
}