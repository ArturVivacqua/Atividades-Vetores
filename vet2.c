//Exercício 2
#include <stdio.h>

int main(void) {
  int vet[6]; 
  
  for( int j = 0; j<6; j++){
    printf("\nDigite os números:\t");
    scanf("%d", &vet[j]);
  }
  for( int i = 0; i<6; i++){
    printf("\n%d", vet[i]);
  }

  return 0;
}