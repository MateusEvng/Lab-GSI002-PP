// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, c;

    printf("**INSIRA 3 VALORES***\n");
    printf("Valor A: \n");
    scanf("%f", &a);
    printf("Valor B: \n");
    scanf("%f", &b);
    printf("Valor C: \n");
    scanf("%f", &c);

    a = a * a;
    b = b * b;
    c = c * c;

    float soma = a + b + c;

    printf("A soma dos quadrados dos valores inseridos eh: %.1f.\n", soma);

    
    
    return 0;

}