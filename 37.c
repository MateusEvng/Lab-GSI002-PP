// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float v;

    printf("*** LOJAS RICARDO EH LENTO ***\n");
    printf("Saldao! Todos os produtos com um desconto de 12%%!\n");
    printf("Insira o valor do seu produto para calcular do desconto: \n");
    scanf("%f", &v);

    printf("O valor original eh %.2f reais, com o desconto de 12%% aplicado teremos no total: %.2f reais!\n", v, (v - (v*0.12)));


    return 0;

}