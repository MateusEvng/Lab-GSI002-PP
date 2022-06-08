// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int x;

    printf("Insira um numero inteiro: \n");
    scanf("%d", &x);

    if ((x % 3 == 0) && (x % 5 == 0))
    {
        printf("\n%d eh divisivel por 3 e por 5\n", x);
    }
    
    else if (x % 5 == 0)
    {
        printf("\n%d eh divisivel por 5\n", x);
    }
    else if (x % 3 == 0)
    {
        printf("\n%d eh divisivel por 3\n", x);
    }
    else
    {
        printf("\n%d nao eh divisivel por 3 nem por 5\n", x);
    }
    
    return 0;

}

   