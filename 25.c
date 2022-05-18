// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, m;

    printf("Insira o valor da area em acres:\n");
    scanf("%f", &a);

    m = a * 4048.58;

    printf("%.1f acres equivalem a %.2f metros quadrados.\n", a, m);
    

    return 0;

}