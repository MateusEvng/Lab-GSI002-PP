// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    // ((base_menor + base_maior) * h)/2 ; base_menor , base_maior > 0

    float base_um, //b1
    base_dois, //b2
    h; //altura

    printf("Insira o valor das bases do trapezio: \n");
    printf("\nBase 1: \n");
    scanf("%f", &base_um);
    printf("Base 2: \n");
    scanf("%f", &base_dois);
    printf("Altura: \n");
    scanf("%f", &h);

    if ((base_um < base_dois) && (base_um > 0) && (base_dois > 0))
    {
        printf("A area do trapezio cujo a base menor vale %.1f e a base maior vale %.1f eh igual ah: %.2f.\n", base_um, base_dois, (((base_um + base_dois)*h)/2));
    }
    if ((base_dois < base_um) && (base_dois > 0) && (base_um > 0))
    {
        printf("A area do trapezio cujo a base menor vale %.1f e a base maior vale %.1f eh igual ah: %.2f.\n", base_dois, base_um, (((base_dois + base_um)*h)/2));
    }

    return 0;

}

   