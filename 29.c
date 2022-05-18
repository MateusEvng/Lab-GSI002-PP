// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, c, d;

    printf("***CALCULADORA DE MEDIA ARITMETICA***\n");
    printf("Insira abaixo suas notas: \n");
    printf("NOTA 1: \n");
    scanf("%f", &a);
    printf("NOTA 2: \n");
    scanf("%f", &b);
    printf("NOTA 3: \n");
    scanf("%f", &c);
    printf("NOTA 4: \n");
    scanf("%f", &d);

    printf("Calculando.....");

    float media = (a + b + c + d)/4;

    printf("Voce inseriu: \n");

    printf("NOTA 1: %.1f\n", a);
    printf("NOTA 2: %.1f\n", b);
    printf("NOTA 3: %.1f\n", c);
    printf("NOTA 4: %.1f\n", d);


    printf("A media de sua notas eh: %.1f \n", media);
    
    return 0;
}