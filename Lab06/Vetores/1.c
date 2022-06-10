#include <stdio.h>

int main(void) {

  int A[6] = {1, 0, 5, -2, -5, 7};
  int s; int i = 0; //soma de A[0], A[1], A[5]

  s = A[1] + A[5] + A[0];

  A[4] = 100;

  while(i<6){
    printf("%d\n", A[i]);
    i++;
  }

  return 0;
}