#include <stdio.h>

int main(){
  int n;
  float num, maior, soma=0, media;

  printf("N: ");
  scanf("%d",&n);

  printf("Numero: ");
  scanf("%f",&num);
  soma = num;
  maior = num;
  for(int i=0;i<n-1;i++){
    printf("Numero: ");
    scanf("%f",&num);
    soma += num;
    if(maior < num)
      maior = num;
  }
  media = soma/n;
  printf("\nMaior: %.2f",maior);
  printf("\nMedia: %.2f\n",media);
}