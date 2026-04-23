#include <stdio.h>

int main(){
  int n, soma=0;

  for(int i=0;i<10;i++){
    printf("N: ");
    scanf("%d",&n);
    soma += n;
  }
  printf("\nSoma: %d.\n",soma);
}