// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    float m,n;

    printf("Insira dois numeros: \n");
    printf("Numero M: \n");
    scanf("%f", &m);
    printf("\nNumero N: \n");
    scanf("%f", &n);

    if (m>n)
    {
        printf("\nEntre os dois numeros inseridos, %.2f eh o maior.\n\n", m);
    }
    else if (n>m)
    {
        printf("\nEntre os dois numeros inseridos, %.2f eh o maior.\n\n", n);
    }
    else
    {
        printf("Numeros iguais\n");
    }

    return 0;

}

   