#include <stdio.h>

int main(void) {
  
  int array[50];

  for(int i = 0; i<50; i++){
    array[i] = (i+5*i)%(i+1);
    printf("%d; ", array[i]);
  }
  
  return 0;
}