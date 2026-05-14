#include <stdio.h>

#define M 8

int main(){
  int v[M], x, y;

  for(int i=0;i<M;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  printf("Digite um índice: ");
  scanf("%d",&x);
  while(x<0 || x>M){
    printf("\nO índice deve estar entre 0 e %d.",M);
    printf("Digite um índice: ");
    scanf("%d",&x);
  }

  printf("Digite outro índice: ");
  scanf("%d",&y);
  while(y<0 || y>M){
    printf("\nO índice deve estar entre 0 e %d.",M);
    printf("Digite outro índice: ");
    scanf("%d",&x);
  }

  printf("\nv[%d] + v[%d] = %d\n",x,y,v[x]+v[y]);
}