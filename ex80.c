#include <stdio.h>

#define M 20

int main(){
  int q[M], maior, pos;

  for(int i=0; i<M; i++){
    printf("Valor %d: ",i+1);
    scanf("%d",&q[i]);
  }

  maior = q[0];
  pos = 0;
  for(int i=0;i<M;i++){
    if(q[i]>maior){
      maior = q[i];
      pos = i;
    }
  }

  printf("\nMaior: %d",maior);
  printf("\nPosição: %d",pos);
}