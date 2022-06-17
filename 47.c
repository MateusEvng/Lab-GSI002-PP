// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
//Exercicio feito após a entrega do lab

#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor_inserido, valor_gerado, show = 0;

    printf("Insira um numero de 4 digtos: \n");
    scanf("%d", &valor_inserido);

    while ((valor_inserido < 1000) || (valor_inserido > 9999))
    {
        printf("\nValor inserido eh invalido.\n");
        printf("Insira um numero de 4 digitos: \n");
        scanf("%d", &valor_inserido);
    }

    show = valor_inserido;

    printf("\nvalor_inserido = %d.\n\n", show);
    printf("%d\n", valor_inserido/1000);

    valor_gerado = valor_inserido % 1000;
   
    printf("%d\n", valor_gerado/100);

    valor_gerado = valor_inserido % 100;

    printf("%d\n", valor_gerado/10);

    valor_gerado = valor_inserido % 10;

    printf("%d\n", valor_gerado/1);



    
    



    return 0;

}