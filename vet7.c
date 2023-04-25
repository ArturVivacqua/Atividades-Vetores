//Exercício 7
#include <stdio.h>

int main(void) {
  int vet[10], maior, n;
  
  for( int j = 0; j<10; j++){
    printf("\nDigite os números:\t");
    scanf("%d", &vet[j]);
  }

  maior = vet[0];

  for(int i = 1; i < 10; i++) {
      if(vet[i] > maior) {
         maior = vet[i];
         n = i;
      }
   }

  printf("\n%d - %d",  n, maior);

  return 0;
}