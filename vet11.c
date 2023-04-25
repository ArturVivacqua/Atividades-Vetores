//Exercício 11
#include <stdio.h>

int main(void) {
  float vet[10], soma = 0;
  int n = 0;
  
  for( int j = 0; j<10; j++){
    printf("\nDigite os números:\t");
    scanf("%f", &vet[j]);
  }
  for( int i = 0; i<10; i++){
    if(vet[i] < 0){
    n = n +vet[i]/vet[i];
    }else if(vet[i]>=0){
    soma = soma + vet[i];
    }
  }
  printf("\n");
  printf("\nO conjunto tem %d números negativos", n);
  printf("\nA soma dos números positivo do conjunto é: %.2f", soma);

  return 0;
}