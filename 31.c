// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    printf("Insira um numero inteiro: \n");
    scanf("%d", &a);

    printf("O antecessor de %d eh: %d\n", a,  (a-1));
    printf("O sucessor de %d eh: %d\n", a, (a+1));
    
    return 0;

}