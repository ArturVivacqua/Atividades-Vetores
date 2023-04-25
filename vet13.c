//Exercício 13
#include <stdio.h>

int main(void) {
  float vet[5], maior, menor;
  int nmaior, nmenor;
  
  for( int j = 0; j<5; j++){
    printf("\nDigite os números:\t");
    scanf("%f", &vet[j]);
  }

  maior = menor = vet[0];

  for(int i = 1; i < 5; i++) {

      if(vet[i] > maior) {
         maior = vet[i];
         nmaior = i;
      }
      else if(vet[i] < menor) {
         menor = vet[i];
         nmenor = i;
      }
   }
  
  printf("\nMAIOR: vet[%d] - %.2f",nmaior,maior);
  printf("\nMENOR: vet[%d] - %.2f", nmenor,menor);


  return 0;
}