#include <stdio.h>

int main(void) {

  float array[10];
  int i = 0; //contador 
  int j = 0; //verificador terá j if's

  //percorre o vetor
  while (i<10)
  {
    printf("Insira um numero para array[%d]: \n", i);
    scanf("%f", &array[i]);
    
    //verifica o vetor se algum i ja foi inserido.
    for (j; j < i; j++)
    {
       while ((array[i] == array[j])){
        printf("Este numero ja foi inserido. Insira outro numero: \n\n");
        printf("Insira um numero para array[%d]: \n", i);
        scanf("%f", &array[i]);
       }
    }

    i++;
  }
  
  //mostra o vetor
  for (int print = 0; print < 10; print++)
  {
    printf("%.2f ",array[print]);
  }
  

  return 0;
}