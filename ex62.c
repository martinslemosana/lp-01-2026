#include <stdio.h>

int main(){
  int n;
  float nota, soma=0, media;

  printf("N: ");
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    printf("Nota: ");
    scanf("%f",&nota);
    soma += nota;
  }
  media = soma/n;

  printf("\nMédia: %.2f\n",media);
}