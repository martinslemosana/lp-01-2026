#include <stdio.h>

#define M 10

int main(){
  int v[M], maior, menor;

  for(int i=0;i<M;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  menor = v[0];
  maior = v[0];
  for(int i=0;i<M;i++){
    if(v[i]<menor)
      menor = v[i];
    if(v[i]>maior)
      maior = v[i];
  }

  printf("\nMaior: %d",maior);
  printf("\nMenor: %d\n",menor);
}

