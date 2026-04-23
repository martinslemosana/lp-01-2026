#include <stdio.h>

int main(){
  int n, maior, menor;
  
  printf("N: ");
  scanf("%d",&n);
  maior = n;
  menor = n;
  for(int i=0;i<99;i++){
    printf("N: ");
    scanf("%d",&n);
    if(maior < n)
      maior = n;
    if(menor > n)
      menor = n;
  }

  printf("\nMaior: %d", maior);
  printf("\nMenor: %d\n", menor);
}