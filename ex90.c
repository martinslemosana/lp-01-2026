#include <stdio.h>

#define M 30

int main(){
  int v[M], busca, cont;

  for(int i=0;i<M;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  printf("\nBusca: ");
  scanf("%d",&busca);

  cont=0;
  for(int i=0;i<M;i++){
    if(v[i]==busca)
      cont++;
  }

  printf("\n%d aparece no vetor %d vezes.",busca,cont);
}