// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float r; //de real
    float d; //de dolar

    printf("$$$ The Currency Converter $$$\n");
    printf("Insira a quantidade em Real (BRL): \n");
    scanf("%f", &r);

    printf("Agora, insira o valor da cotacao do Dolar (USD): \n");
    scanf("%f", &d);

    printf("Entao, para cada 1 Real teremos %.2f dolares\n", d);
    printf("Logo, %.2f reais equivalem ah %.2f dolares!\n", r, (r/d));


    
    return 0;

}