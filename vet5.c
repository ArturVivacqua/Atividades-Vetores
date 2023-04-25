//Exercício 5
#include <stdio.h>

int main(void) {
  int vet[10], n = 0;
  
  for( int j = 0; j<10; j++){
    printf("\nDigite os números:\t");
    scanf("%d", &vet[j]);
  }
  for( int i = 0; i<10; i++){
    if(vet[i] % 2 == 0){
    printf("\n%d", vet[i]);
    n = n +vet[i]/vet[i];
    }
  }
  printf("\n");
  printf("\nO conjunto tem %d números pares", n);


  return 0;
}