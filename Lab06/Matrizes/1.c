#include <stdio.h>
#include <stdlib.h>

int main(){

    int count = 4; int i, j, count1;
    

    float matriz[count][count];

    for (i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            printf("Insira um valor para matriz[%d][%d]: \n", i, j);
            scanf("%f", &matriz[i][j]);
        }
        
    }

    count1 = 0;

    for (i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            if(matriz[i][j] > 10)
                count1 ++;
            
        }
        
    }

    
    printf("\nA matriz inserida tem %d numeros maiores que zero.\n", count1);



    return 0;
}