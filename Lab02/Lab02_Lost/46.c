// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
//Exercicio feito após a entrega do lab

#include <stdio.h>
#include <stdlib.h>

int main(){

    //progama que le inteiro xyz e imprime zyx
    int numero_lido, show, numero_gerado = 0;


    printf("Insira um numero de 3 digitos: \n");
    scanf("%d", &numero_lido);

    //verificador
    while ((numero_lido > 999.0) || (numero_lido < 100.0))
    {
        printf("\nO numero inserido eh invalido\n");
        printf("Insira um numero de 3 digitos: \n");
        scanf("%d", &numero_lido);
    }

    show = numero_lido;

    numero_gerado = numero_lido % 10;

    numero_lido = numero_lido - (numero_lido % 10);


    numero_gerado = numero_gerado * 100;

    numero_gerado = numero_gerado + (numero_lido % 100);

    numero_lido = numero_lido - (numero_lido % 100);


    numero_gerado = numero_gerado + (numero_lido / 100);


    printf("\nnumero_lido = %d\n", show);
    printf("numero_gerado = %d", numero_gerado);
    

    return 0;

}