#include <stdio.h>

#define M 10

int main(){
  int v[M], maior, pos;

  for(int i=0;i<M;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  maior = v[0];
  pos = 0;
  for(int i=0;i<M;i++){
    if(v[i]>maior){
      maior = v[i];
      pos = i;
    }
  }

  printf("\nMaior: %d",maior);
  printf("\nPosição: %d",pos);
}