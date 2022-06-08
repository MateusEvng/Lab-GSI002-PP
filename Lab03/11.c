// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int d, //inteiro
    soma, // soma dos alg
    resto, //resto da div
    new_d; // d para while

    soma = 0;

    printf("Insira um numero inteiro: \n");
    scanf("%d", &d);

    new_d = d;

    if (d>0)
    {
        while (new_d>0)
        {
            resto = new_d%10;
            new_d = (new_d - resto)/10;
            soma = soma + resto;
        }
        
        printf("\nA soma dos algorismos de %d eh %d.\n", d, soma);
    }
    if (d<0)
    {
        printf("Numero invalido, \n");
    }
    

    return 0;

}

   