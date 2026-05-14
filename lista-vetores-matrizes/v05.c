#include <stdio.h>

#define M 10

int main(){
  int v[M], cont;

  for(int i=0;i<M;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  cont=0;
  for(int i=0;i<M;i++){
    if(v[i]%2==0)
      cont++;
  }

  printf("\n%d números pares.\n",cont);
}