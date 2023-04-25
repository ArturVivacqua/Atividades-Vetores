//Exercício 8
#include <stdio.h>

int main(void) {
  int vet[6];
  
  for( int j = 0; j<6; j++){
    printf("\nDigite os números:\t");
    scanf("%d", &vet[j]);
  }

  for( int i = 5; i>=0; i--){
    printf("\n%d", vet[i]);
  }

  return 0;
}