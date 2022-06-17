// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
//Exercicio feito após a entrega do lab

#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura_degrau, altura = 0;
    int q = 0;
    //altura máxima recomendada eh de 18 cm, então o programa não aceitará valores maiores

    

    printf("Insira a altura do degrau: (centimetros)\n");
    scanf("%f", &altura_degrau);

    while (altura_degrau > 18.0)
    {
        printf("\nA altura de %.1f centimetros inseria nao eh valida.\n", altura_degrau);
        printf("Insira a altura do degrau: (centimetros)\n");
        scanf("%f", &altura_degrau);
    }

    printf("\nAgora insira a altura em que voce quer chegar: (metros)\n");
    scanf("%f", &altura);

    altura = altura * 100;
    //altura vai de metro para centimetro.

    q = altura / altura_degrau;

    printf("\nSera necessario %d degraus de %.1f centimetros para alcancar a altura de %.1f metros.\n", q, altura_degrau, (altura/100));
    

    
    return 0;

}