//Exercício 6
#include <stdio.h>

int main(void) {
  int vet[10], maior, menor;
  
  for( int j = 0; j<10; j++){
    printf("\nDigite os números:\t");
    scanf("%d", &vet[j]);
  }

  maior = menor = vet[0];

  for(int i = 1; i < 10; i++) {
      if(vet[i] > maior) {
         maior = vet[i];
      }
      else if(vet[i] < menor) {
         menor = vet[i];
      }
   }

  printf("\nO maior número é: %d", maior);
  printf("\nO menor número é: %d", menor);

  return 0;
}