//Exercício 12
#include <stdio.h>

int main(void) {
  float vet[5], maior, menor, soma = 0, media;
  
  for( int j = 0; j<5; j++){
    printf("\nDigite os números:\t");
    scanf("%f", &vet[j]);
  }

  for( int k = 0; k < 5; k++){
    printf("\n%.2f", vet[k]);
    soma = soma +vet[k];
  }
  maior = menor = vet[0];

  for(int i = 1; i < 5; i++) {

      if(vet[i] > maior) {
         maior = vet[i];
      }
      else if(vet[i] < menor) {
         menor = vet[i];
      }
   }
  media = soma/5;
  printf("\nO maior número é: %.2f", maior);
  printf("\nO menor número é: %.2f", menor);
  printf("\nA media dos números é: %.2f", media);

  return 0;
}