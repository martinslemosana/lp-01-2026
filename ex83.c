#include <stdio.h>

#define M 20

int main(){
  int v[M];

  for(int i=0;i<M;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  printf("Ordem inversa: ");
  for(int i=M-1;i>=0;i--){
    printf("%d, ",v[i]);
  }
}