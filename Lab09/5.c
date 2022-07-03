//Joao Mateus 12011bsi277
/*
5. Faça uma função chamada ‘simplifica’ que recebe como parâmetro o numerador e o denominador de uma 
fração. Esta função deve simplificar a fração recebida dividindo o numerador e o denominador pelo maior 
fator possível. Por exemplo, a fração 36/60 simplifica para 3/5 dividindo o numerador e o denominador 
por 12. A função deve modificar as variáveis passadas como parâmetro. *finalizar*
*/
#include <stdio.h>
#include <stdlib.h>

void simplifica (int n, int d);

int main (){

    int numerador, denominador = 0;

    printf("\n\t****CALCULADORA****\n");

    printf("Insira o Numerador: ");
    scanf("%d", &numerador);
    printf("\n");

    printf("Insira o Denominador: ");
    scanf("%d", &denominador);
    printf("\n");


    
    return 0;
}


