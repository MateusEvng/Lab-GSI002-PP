// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;

    printf("Insira um numero inteiro: \n");
    scanf("%d", &i);

    // soma: sucessor de 3i + antecessor de 2i

    int sucessor_do_triplo = ((3 * i) + 1);
    int antecessor_do_dobro = ((2 * i) - 1);

    int soma = sucessor_do_triplo + antecessor_do_dobro;

    printf("Voce inseriu %d, o Sucessor do Triplo eh %d, o Antecessor do Dobro eh %d.\n", i, sucessor_do_triplo, antecessor_do_dobro);
    printf("A soma eh: %d.\n", soma);
    
    return 0;

}