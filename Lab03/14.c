// João Mateus F S Evangelista - 12011BSI277 (MateusEvng_07#6031 Discord) (MateusEvng GitHub)
#include <stdio.h>
#include <stdlib.h>

int main() {

    //intervalo 0-10
    float trab_lab, //trabalho de lab p 2
    av_semestr, //avalição semestral p 3
    ex_final; //exame final p 5

    //media p: ((n1*p1)+(n2*p2)...)/p1+p2+...

    float media_p;

    //IFs

    //media_p 0-2,9 repr
    //media_p 3-4,9 rec
    //media_p 5-10 apr

    printf("***Insira abaixo as suas notas para o calculo da media: ***\n\n");
    printf("Nota do Trabalho de Laboratorio: \n");
    scanf("%f", &trab_lab);
    printf("Nota da Avalicao Semestral: \n");
    scanf("%f", &av_semestr);
    printf("Nota do Exame final: \n");
    scanf("%f", &ex_final);


    if ((trab_lab >= 0 && trab_lab <= 10)&&(av_semestr >= 0 && av_semestr <= 10)&&(ex_final >= 0 && ex_final <= 10))
    {
        media_p = (((trab_lab * 2) + (av_semestr * 3) + (ex_final * 5))/10);

        if ((media_p >= 0) && (media_p <=2.9))
        {
            printf("\nOla aluno(a), sua media eh: %.1f.\n", media_p);
            printf("Status: REPROVADO.\n");
        }
        if ((media_p >=3) && (media_p <=4.9))
        {
            printf("\nOla aluno(a), sua media eh: %.1f.\n", media_p);
            printf("Status: RECUPERACAO.\n");
        }
        if ((media_p >= 5) && (media_p <=10))
        {
            printf("\nOla aluno(a), sua media eh: %.1f.\n", media_p);
            printf("Status: APROVADO.\n");
        }
        
    }
    else
    {
        printf("\nInsira notas entre 0 e 10, apenas!!\n");
    }
    
    return 0;

}

   