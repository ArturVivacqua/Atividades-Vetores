//Exercício 10
#include <stdio.h>

int main(void) {
  int nota[15], soma = 0; 
  float media;
  
  for( int j = 0; j<15; j++){
    printf("\nDigite os números:\t");
    scanf("%d", &nota[j]);
    while( nota[j]<0|nota[j]>10){
    printf("\nNúmero inválido, digite a nota novamente:\t");
    scanf("%d", &nota[j]);
    }
    soma = soma + nota[j];
  }

   media = soma/15;
   printf ("\nA média geral da turma é: %.2f", media);
  

  return 0;
}