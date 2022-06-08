// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a, b, c, i, pre_mg, pre_mh;
    float mg, mp, mh, ma;

    printf("Insira tres valores: \n");
    printf("Valor A: \n");
    scanf("%d", &a);
    printf("Valor B: \n");
    scanf("%d", &b);
    printf("Valor C: \n");
    scanf("%d", &c);

    printf("Escolha a opcao: \n");
    printf("\n1- Media Geometrica\n");
    printf("2- Media Ponderada\n");
    printf("3- Media Harmonica\n");
    printf("4- Media Aritmetica\n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        pre_mg = (a * b * c);
        mg = pow(pre_mg, 1.0/3.0);
        printf("\n1- Media Geometrica = %.2f\n", mg);
        break;

    case 2:
        mp = ((1*a) + (2*b) + (3*c))/6;
        printf("2- Media Ponderada = %.2f\n", mp);
        break;
    
    case 3:
        pre_mh = (1.0/a) + (1.0/b) + (1.0/c);
        mh = 3.0/pre_mh;
        printf("3- Media Harmonica = %.2f\n", mh);
        break;
    
    case 4:
        ma = (a + b + c)/3;
        printf("4- Media Aritmetica = %.2f\n", ma);
        break;
    
    default:
        printf("\nOpcao invalida\n");
        break;
    }

    return 0;

}

   