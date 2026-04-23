#include <stdio.h>

int main(){
  int n, soma=0;
  float media;

  for(int i=0;i<10;i++){
    printf("N: ");
    scanf("%d",&n);
    soma += n;
  }
  media = (float)soma/10;
  printf("\nMédia: %.2f\n",media);
}