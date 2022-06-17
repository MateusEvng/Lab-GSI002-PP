// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
//Exercicio feito após a entrega do lab

#include <stdio.h>
#include <stdlib.h>

int main(){

    //converter letra maiuscula em minuscula

    char maiusculo, minusculo;

    //na tabela ascii minusculo eh maiusculo + 32

    printf("Insira uma letra maiuscula: \n");
    scanf(" %c", &maiusculo);

    int verificador = maiusculo;

    /*
        verifica char inserido.

        if verificador > 90 ou < que 65 mostre uma mensagem de erro.

    */
   //printf("%c %d", verificador, verificador);
   
    while ((verificador > 90.0) || (verificador < 65.0) )
    {
        printf("\nCaracter inserido eh invalido. Deve ser uma letra maiuscula.\n");
        printf("Insira uma letra maiuscula: \n");
        scanf(" %c", &maiusculo);

        verificador = maiusculo;
    }

    int min = verificador + 32;

    minusculo = min;

    printf("\n%c minusculo eh %c\n", maiusculo, minusculo);
    


    
    return 0;

}