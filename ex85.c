#include <stdio.h>

#define M 365

int main(){
  float temp[M], menor, maior, soma=0, media;
  int cont=0;

  for(int i=0;i<M;i++){
    printf("Temp dia %d: ",i+1);
    scanf("%f",&temp[i]);
  }

  menor = temp[0];
  maior = temp[0];
  for(int i=0;i<M;i++){
    if(temp[i]<menor)
      menor = temp[i];
    if(temp[i]>maior)
      maior = temp[i];
    soma += temp[i];
  }
  
  media = soma/M;

  for(int i=0;i<M;i++){
    if(temp[i]<media)
      cont++;
  }

  printf("\nMenor temp: %.2f",menor);
  printf("\nMaior temp: %.2f",maior);
  printf("\nTemp media: %.2f",media);
  printf("\nN. temps abaixo da media: %d",cont);
}