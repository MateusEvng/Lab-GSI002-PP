// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    float a, b, c;

    printf("Insira 3 valores correspondentes aos lados de um triangulo: \n\n");
    printf("Lado A: \n");
    scanf("%f", &a);
    printf("Lado B: \n");
    scanf("%f", &b);
    printf("Lado C: \n");
    scanf("%f", &c);

    //IFs

    // IF PRINCIPAL: O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois 
    // lados;

    /*
        IFS SECUNDARIOS:

        Chama-se equilátero o triângulo que tem três lados iguais; 
        Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais; 
        Recebe o nome de escaleno o triângulo que tem os três lados diferentes; 
    */

    if ((a < (b+c)) && (b < (a+c)) && (c < (a+b)))
    {

        printf("\nOs lados A: %.1f, B: %.1f e C: %.1f podem ser lados de um triangulo!\n", a, b, c);

        if ((a == b) && (b == c)) 
        {
            printf("Triangulo Equilatero\n");
        }
        else if ((a != b) && (a != c) && (c != b))
        {
            printf("Triangulo Escaleno\n");
        }
        else
        {
            printf("Triangulo Isosceles\n");
        }
        
    }
    else
    {
        printf("\nOs lados A: %.1f, B: %.1f e C: %.1f nao podem ser lados de um triangulo.\n", a, b, c);
    }


    return 0;

}

   