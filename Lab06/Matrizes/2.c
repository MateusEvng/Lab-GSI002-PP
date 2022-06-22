#include <stdio.h>
#include <stdlib.h>

int main(){

    int count = 5; int matriz[count][count];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 0;
            }
            
        }
        
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}