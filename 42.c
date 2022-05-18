// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    float s;

    printf("*** PORTAL DOS FUNCIONARIOS RICARDO EH LENTO ***\n");
    printf("Bem-vindo(a) ao portal....\n\n");
    printf("Insira o valor do seu salario: \n");
    scanf("%f", &s);

    printf("\nVoce recebera no proximo mes: %.2f reais.\n", (s + (s*0.05) - (s*0.07)));
    printf("Valor da gratificacao: %.2f reais.\n", (s * 0.05));
    printf("Valor do imposto: %.2f reais.\n", (s * 0.07));
    
    return 0;

}