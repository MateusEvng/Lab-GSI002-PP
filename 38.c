// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float s;

    printf("*** PORTAL DOS FUNCIONARIOS RICARDO EH LENTO ***\n");
    printf("Bem-vindo(a) ao portal....\n");
    printf("Insira seu salario para o calculo do reajuste.\n");
    scanf("%f", &s);

    printf("O seu salario original eh %.2f.\n", s);
    printf("Com o reajuste teremos: %.2f\n", (s + (s * 0.25)));
    printf("Aumento de %.2f reais\n", (s * 0.25));

    return 0;

}