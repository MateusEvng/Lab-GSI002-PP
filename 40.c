// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    int d;

    printf("*** CALCULO DE PEGAMENTOS  ***\n\n");
    printf("Servico prestado: ENCANADOR\n");

    printf("Insria a quantidade de dias trabalhados: \n");
    scanf("%d", &d);
    
    printf("\nSr. Encanador, voce trabalhou %d dias. \n", d);
    printf("Seu pagamento bruto: %d reais.\n", (d*30));
    printf("Imposto sobre o pagamento bruto %.2f.\n\n", (d*30*0.08));
    printf("Pagamento total: %.2f.\n", (d*30)-(d*30*0.08));


    return 0;

}