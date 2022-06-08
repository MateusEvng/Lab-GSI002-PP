// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int s;
    float media = 0;

    printf("Insira 10 numeros: \n");
    
    for (int i = 1; i <= 10; i++)
    {
        printf("\nInsira numero %d: \n", i);
        scanf("%d", &s);
        media = media + s;
    }
    
    printf("\nA media dos 10 numeros iseridos eh: %.1f\n", media/10);


    return 0;

}