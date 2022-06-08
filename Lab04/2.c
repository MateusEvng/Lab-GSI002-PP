// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    int j, k;

    j = k = 0;
    
    printf("1 a 100 com for\n\n");

    for (int i = 0; i <= 100; i++)
    {
        printf("%d ", i);
    }

    printf("\n\n1 a 100 com while\n\n");

    while (j<=100)
    {
        printf("%d ", j);
        j ++;
    }
    
    printf("\n\n1 a 100 com do-while\n\n");

    do
    {
        printf("%d ", k);
        k ++;
    } while (k<=100);
    



    return 0;

}