#include <stdio.h>

int main(void) {
  //primo eh um numero divisivel por 1 e por ele mesmo, apenas.
  /*alem disso todo numero primo maior do que 2 é impar, logo
    posso afirmar que enquanto array[i] for maior que 2 e for impar ele é 
    primo */ //(verifica_primo)

  int count = 10;
  int verifica_primo;
  int array[count];

  //percorre o vetor para add valores nele
  for (int i = 0; i < count; i++)
  {
    printf("Insira um numero para array[%d]: \n", i);
    scanf("%d", & array[i]);
  }

  for (int i = 0; i < count; i++)
  {
    verifica_primo = 2;
    // "posso afirmar que enquanto array[i] for maior que 2 e for impar ele é primo"

    while (verifica_primo <= array[i])
    {
      if (array[i] % 2 !=0)
      {
        printf("\n%d na posicao array[%d] eh primo.", array[i], i);
        break;
      }
      verifica_primo ++;
    }
  }
  




  //preciso corrigir a logica do if para ignorar impares q n sao primos
  
  return 0;
}