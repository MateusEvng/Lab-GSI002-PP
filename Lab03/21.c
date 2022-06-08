// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    float a, b;
    /*
    1- Soma de 2 números. 
    2- Diferença entre 2 números (maior pelo menor). 
    3- Produto entre 2 números. 
    4- Divisão entre 2 números (o denominador não pode ser zero). 
    Opção
    */

    printf("Escolha a opcao: \n");
    printf("\n1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    scanf("%d", &i);


    switch (i)
    {
    case 1:
        printf("\nInsira os valores abaixo: \n");
        printf("Valor A: \n");
        scanf("%f", &a);
        printf("Valor B: \n");
        scanf("%f", &b);
        printf("Resultado: %.1f\n", (a+b));

        break;
    
    case 2:
        printf("\nInsira os valores abaixo: \n");
        printf("Valor A: \n");
        scanf("%f", &a);
        printf("Valor B: \n");
        scanf("%f", &b);

        if (a>b)
        {
            printf("Resultado: %.1f\n", (a-b));
        }
        else
        {
            printf("Resultado: %.1f\n", (b-a));
        }

        break;
    
    case 3:
        printf("\nInsira os valores abaixo: \n");
        printf("Valor A: \n");
        scanf("%f", &a);
        printf("Valor B: \n");
        scanf("%f", &b);
        printf("Resultado: %.1f\n", (a*b));

        break;
    
    case 4:
        printf("\nInsira os valores abaixo: \n");
        printf("Valor A: \n");
        scanf("%f", &a);
        printf("Valor B: \n");
        scanf("%f", &b);

        if (b == 0)
        {
            printf("\nNao eh possivel divir %.1f por Zero, tente com outro valor em B.\n", a);
        }
        else
        {
            printf("Resultado: %.2f\n", a, b, (a/b));
        }

        break;
    
    default:
        printf("Erro. Insira uma das opcoes mostradas acima...!\n");
        break;
    }

    return 0;

}

   