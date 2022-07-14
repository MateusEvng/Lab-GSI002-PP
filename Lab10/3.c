#include <stdio.h>

int main(void) {

  printf("\n\t****LABORATORIO 10****\n\n");

  int count = 10;

  float array[count]; float *pointer[count];

  for(int i = 0; i < count; i++){
    printf("Insira um valor para array[%d]: ", i);
    scanf("%f", &array[i]); printf("\n");
  }

  printf("\n");

  for(int i = 0; i < count; i++){
    pointer[i] = &array[i];
  }
  
  for(int i = 0; i < count; i++){
    printf("Endereco de array[%d]: %d", i, &pointer[i]);
    printf("\n");
  }
  
  return 0;
}