
//Exercício 1
#include <stdio.h>

int main(void) {
  int A[6] = {1,0,5,-2,-5,7};
  int soma = A[1]+A[0]+A[5];

  A[4] = 100;
  
  for( int i = 0; i<6; i++){
    printf("\n%d", A[i]);
  }

  return 0;
}