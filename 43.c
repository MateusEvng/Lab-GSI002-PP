// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("*** PORTAL DOS FUNCIONARIOS RICARDO EH LENTO ***\n");
    printf("Bem-vindo(a) ao portal....\n\n");
    printf("Categoria: VENDEDOR\n\n");

    float vc; //valor da compra

    printf("Insira o valor da compra: \n");
    scanf("%f", &vc);

    printf("\nValor total (desconto de 10%%): %.2f reais.\n", (vc - (vc * 0.1)));
    printf("Valor das parcelas (compra parcelada em 3x sem juros): %.2f reais.\n\n", (vc/3));

    printf("Sua comissao em caso de compra a vista: %.2f reais.\n", (0.05 * ((vc - (vc * 0.1)))));
    printf("Sua comissao em caso de compra parcelada: %.2f reais.\n", (0.05 * vc));


    
    return 0;

}