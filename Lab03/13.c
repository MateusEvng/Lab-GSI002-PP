// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    float
    n_um,
    n_dois,
    n_tres,
    n_final; // ((n*p) + (n*p) + (...) + (...))/p + p + p + ...

    printf("Insira a nota das tres provas: \n\n");
    printf("Prova 1: \n");
    scanf("%f", &n_um);
    printf("Prova 2: \n");
    scanf("%f", &n_dois);
    printf("Prova 3: \n");
    scanf("%f", &n_tres);

    n_final = ((n_um*1)+(n_dois*1)+(n_tres*2))/4;

    if (n_final >= 60)
    {
        printf("\nVoce foi aprovado com nota %.1f.\n", n_final);
    }
    else
    {
        printf("\nVoce foi reprovado com nota %.1f...insuficiencia de %.1f pontos.\n", n_final, (60-n_final));
    }
    
    return 0;

}

   