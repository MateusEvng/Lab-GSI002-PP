// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    float z,x;

    printf("Insira as suas notas: \n\n");
    printf("Nota 1: \n");
    scanf("%f", &x);
    printf("\nNota 2: \n");
    scanf("%f", &z);

    if (((z >= 0.0) && (z <= 10.0)) && ((x >= 0.0) && (x <= 10.0))) 
    {
        printf("Media das notas %.1f e %.1f : %.2f.\n", x, z, ((x+z)/2));
    }
    else
    {
        printf("Uma das notas eh invalida. Erro. \n");
    }

    return 0;

}

   