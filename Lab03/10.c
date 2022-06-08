// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>


int main() {

    float h; //altura
    char sx; //sexo

    
    printf("Insira sua altura (em metros): \n");
    scanf("%f", &h);
    printf("Insira seu sexo: \n");
    scanf(" %c", &sx);

    if (((sx == 'm')||(sx == 'M')))
    {
        printf("\nSeu peso ideal eh: %.1f\n", ((72.7*h)-58.0));
        printf("\nAltura inserida: %.2f\n", h);
        printf("Sexo inserido: Masculino.\n");
    }
    if (((sx == 'f')||(sx == 'F')))
    {
        printf("\nSeu peso ideal eh: %.1f\n", ((62.1*h)-44.7));
        printf("\nAltura inserida: %.2f\n", h);
        printf("Sexo inserido: Feminino.\n");
    }

    return 0;

}

   