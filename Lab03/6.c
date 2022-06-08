// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int m,n;

    printf("Insira dois numeros: \n");
    printf("Numero M: \n");
    scanf("%d", &m);
    printf("\nNumero N: \n");
    scanf("%d", &n);

    if (m>n)
    {
        printf("\nEntre os dois numeros inseridos, %d eh o maior.\n\n", m);
        printf("A diferenca entre %d e %d eh de %d.\n", m, n, (m-n));
    }
    else if (n>m)
    {
        printf("\nEntre os dois numeros inseridos, %d eh o maior.\n\n", n);
        printf("A diferenca entre %d e %d eh de %d.\n", n, m, (n-m));
    }
    else
    {
        printf("erro.\n");
    }

    return 0;
}