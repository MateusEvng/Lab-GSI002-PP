// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma, s;

    soma = 0;

    printf("Insira 10 numeros: \n");
    
    for (int i = 1; i <= 10; i++)
    {
        printf("\nInsira numero %d: \n", i);
        scanf("%d", &s);
        soma = soma + s;
    }
    
    printf("\nA soma dos 10 numeros iseridos eh: %d.\n", soma);


    return 0;

}