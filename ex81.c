#include <stdio.h>

#define M 20

int main(){
  int q[M], menor, pos;

  for(int i=0; i<M; i++){
    printf("Valor %d: ",i+1);
    scanf("%d",&q[i]);
  }

  menor = q[0];
  pos = 0;
  for(int i=0;i<M;i++){
    if(q[i]<menor){
      menor = q[i];
      pos = i;
    }
  }

  printf("\nMenor: %d",menor);
  printf("\nPosição: %d",pos);
}