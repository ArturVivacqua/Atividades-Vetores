//Exercício 3
#include <stdio.h>
#include <math.h>

int main(void) {
  float vet[10], vet2[10];
  
  for( int j = 0; j<10; j++){
    printf("\nDigite os números:\t");
    scanf("%f", &vet[j]);
  }
  for( int i = 0; i<10; i++){
    vet2[i] = pow(vet[i], 2);
  
  }
  for(int k = 0; k<10; k++){
    printf("\n%.2f  -  %.2f", vet[k], vet2[k]);
  }

  return 0;
}