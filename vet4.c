//Exercício 4
#include <stdio.h>

int main(){
int vet[8], x, y;

for (int i = 0; i <8; i++){
  printf("\n Digite um número:\t");
  scanf("%d", &vet[i]);
}
  printf("\n Digite um valor x: \t");
  scanf("%d", &x);

  printf("\n Digite um valor y: \t");
  scanf("%d", &y);

  while (x>7|x<0|y<0|y>7){
  printf("\nTente novamente\n");
  printf("\n Digite um valor x: \t");
  scanf("%d", &x);

  printf("\n Digite um valor y: \t");
  scanf("%d", &y);

    
  }
  printf("\nPosição %d = %d", x, vet[x]);
  printf("\nPosição %d = %d", y, vet[y]);
  
  
  return 0;
}