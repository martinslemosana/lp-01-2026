#include <stdio.h>

#define M 15

int main(){
  int v1[M], v2[M], cont;

  for(int i=0;i<M;i++){
    printf("v1[%d] = ",i);
    scanf("%d",&v1[i]);
  }

  for(int i=0;i<M;i++){
    printf("v2[%d] = ",i);
    scanf("%d",&v2[i]);
  }

  cont=0;
  for(int i=0;i<M;i++){
    if(v1[i]==v2[i])
      cont++;
  }

  printf("\nQtde de vezes que uma posição de v1 é igual a v2: %d",cont);
}