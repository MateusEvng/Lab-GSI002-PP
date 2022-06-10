#include <stdio.h>

int main(void) {

  int entrada[6]; int contrario[6];

  int i; //preenche entrada
  int j = 5; //preenche contrario

  for(i = 0; i<6; i++){
    printf("Insira um valor para array[%d]: \n", i);
    scanf("%d", &entrada[i]);

    contrario[j] = entrada[i];
    j = j -1;
    
  }
    
  for(int p = 0; p<6; p++){
    printf("\narray[%d] = %d ", p, contrario[p]);
    
  }
  
  return 0;
}