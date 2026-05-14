#include <stdio.h>

#define N 5

int main(){
  int v[N], maior, posMaior, menor, posMenor;

  for(int i=0;i<N;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  maior = v[0];
  posMaior = 0;
  menor = v[0];
  posMenor = 0;
  for(int i=0;i<N;i++){
    if(v[i]>maior){
      maior = v[i];
      posMaior = i;
    }
    if(v[i]<menor){
      menor = v[i];
      posMenor = i;
    }
  }

  printf("\nv: ");
  for(int i=0;i<N;i++)
    printf("%d, ",v[i]);
  printf("\nPosição do maior: %d",posMaior);
  printf("\nPosição do menor: %d",posMenor);
}