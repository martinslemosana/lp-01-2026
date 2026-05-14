#include <stdio.h>

#define N 5

int main(){
  int v[N], maior, menor, soma;
  float media;

  for(int i=0;i<N;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  maior = v[0];
  menor = v[0];
  for(int i=0;i<N;i++){
    if(v[i]>maior)
      maior = v[i];
    if(v[i]<menor)
      menor = v[i];
    soma+=v[i];
  }
  media = (float)soma/N;

  printf("\nv: ");
  for(int i=0;i<N;i++)
    printf("%d, ",v[i]);
  printf("\nMaior: %d",maior);
  printf("\nMenor: %d",menor);
  printf("\nMedia: %.2f\n",media);
}