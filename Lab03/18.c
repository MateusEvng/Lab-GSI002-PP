// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int op;
    float a, b;

    printf("*****CALCULADORA*****\n\n");
    printf("\t1- SUBTRACAO\n");
    printf("\t2- ADICAO\n");
    printf("\t3- DIVISAO\n");
    printf("\t4- MULTIPLICACAO\n");
    printf("\nDigite a opcao da operacao desejada: \n");
    scanf("%d", &op);

    if (op == 1) //-
    {
        printf("\nOperacao escolhida: SUBTRACAO\n\n");
        printf("Valor A: \n");
        scanf("%f", &a);
        printf("Valor B: \n");
        scanf("%f", &b);
        printf("Resultado: %.1f - %.1f = %.2f\n", a, b, (a-b));
    }
    else if (op == 2) //+
    {
       printf("\nOperacao escolhida: ADICAO\n\n");
        printf("Valor A: \n");
        scanf("%f", &a);
        printf("Valor B: \n");
        scanf("%f", &b);
        printf("Resultado: %.1f + %.1f = %.2f\n", a, b, (a+b));
    }
    else if (op == 3) // div
    {
        printf("\nOperacao escolhida: DIVISAO\n\n");
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
            printf("Resultado: %.1f / %.1f = %.2f\n", a, b, (a/b));
        }
        
    }
    else if (op == 4) // *
    {
        printf("\nOperacao escolhida: MULTIPLICACAO\n\n");
        printf("Valor A: \n");
        scanf("%f", &a);
        printf("Valor B: \n");
        scanf("%f", &b);
        printf("Resultado: %.1f * %.1f = %.2f\n", a, b, (a*b));
    }
    else
    {
        printf("\nNumero de operacao invalido, digite um numero entre 1 e 4\n");
    }

    return 0;

}

   