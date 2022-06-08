// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float a, b, c, delta, x_pos, x_neg;

    printf("Insira os valores para equacacao de 2 grau: \n\n");
    printf("Valor A: \n");
    scanf("%f", &a);
    printf("Valor B: \n");
    scanf("%f", &b);
    printf("Valor C: \n");
    scanf("%f", &c);

    delta = (b * b) - 4 * a * c;

    if (a != 0)
    {
        if (delta >= 0)
        {
            x_pos = (-b + sqrt(delta))/ 2 * a;
            x_neg = (-b - sqrt(delta))/ 2 *a;

            printf("\nDelta eh: %.1f.\n", delta);
            printf("X1 eh: %.1f.\n", x_pos);
            printf("X2 eh: %.1f.\n", x_neg);
        }
        else if (delta < 0)
        { 
            printf("\nNão existe raiz\n");
        }
        else 
        {
            x_pos = (-b + sqrt(delta))/ 2 * a;
            x_neg = (-b - sqrt(delta))/ 2 *a;

            printf("\nDelta eh: %.1f.\n", delta);
            printf("X1 eh: %.1f.\n", x_pos);
            printf("X2 eh: %.1f.\n", x_neg);
            printf("\nRaiz unica\n");
        }
    }
    else
    {
        printf("\nNao eh equacao de segundo grau");
    }
    
    return 0;

}

   