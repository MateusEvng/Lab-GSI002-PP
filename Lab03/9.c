// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    float s, //salario
    v; //valor prest empr

    printf("Sr. trabalhador\n");
    printf("Insira o valor do seu salario: \n");
    scanf("%f", &s);
    printf("\nInsira o valor da prestacao de seu emprestimo: \n");
    scanf("%f", &v);

    if (v>(s*0.2))
    {
        printf("\nEmprestimo nao concedido\n");
    }
    else
    {
        printf("\nEmprestimo concedido\n");
    }
    


    return 0;

}

   