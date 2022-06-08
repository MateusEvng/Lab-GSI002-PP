// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    //taxa de  imposto  sobre  o  produto  (MG  7%;  SP  12%;  RJ  15%;  MS  8%).
    float valor;
    char estado[2];
    printf("Insira o valor do produto: \n");
    scanf("%f", &valor);
    printf("Insira o seu Estado, em forma de sigla.: \n");
    scanf("%s", &estado);

    if ((strcmp(estado, "mg")) || (strcmp(estado, "MG")))
    {
        printf("Produto com imposto: %.2f.\n", valor+(valor * 0.07));
    }
    else if ((strcmp(estado, "sp")) || (strcmp(estado, "SP")))
    {
        printf("Produto com imposto: %.2f.\n", valor+(valor * 0.12));
    }
    else if ((strcmp(estado, "rj")) || (strcmp(estado, "RJ")))
    {
        printf("Produto com imposto: %.2f.\n", valor+(valor * 0.15));
    }
    else if ((strcmp(estado, "ms")) || (strcmp(estado, "MS")))
    {
        printf("Produto com imposto: %.2f.\n", valor+(valor * 0.08));
    }
    else
    {
        printf("Erro. Estado digitado nao eh valido.\n");
    }
    
    return 0;

}

   