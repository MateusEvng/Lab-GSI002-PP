// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    int h; //horas como int para facilitar a logia do programa.
    //casos como 30horas e meia serão lidos como 30 horas, apenas.
    //caso o senhor, professor, deseje como float tentarei fazê-lo depois.
    
    float v; //valor hora trabalhada

    printf("*** PORTAL DOS FUNCIONARIOS RICARDO EH LENTO ***\n");
    printf("Bem-vindo(a) ao portal....\n\n");
    printf("Insira o valor da sua hora de trabalho: \n");
    scanf("%f", &v);
    printf("Insira o valor de horas trabalhadas: \n");
    scanf("%d", &h);

    printf("\nValor total do salario: %.2f reais.\n", (v * h));
    printf("Valor do ajuste de 10%%: %.2f reais. \n", (v * h * 0.1));
    printf("Valor total: %.2f reais.\n", ((v * h) + (v * h * 0.1)));  

    return 0;

}