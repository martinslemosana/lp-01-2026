#include <stdio.h>

#define M 20

int main(){
  int v1[M], v2[M], n, cont=0;

  for(int i=0;i<M;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v1[i]);
  }

  printf("N: ");
  scanf("%d",&n);

  for(int i=0;i<M;i++){
    if(v1[i]!=n){
      v2[cont] = v1[i];
      cont++;
    }
  }

  printf("\nv1: ");
  for(int i=0;i<M;i++)
    printf("%d, ",v1[i]);

  printf("\nv2: ");
  for(int i=0;i<cont;i++)
    printf("%d, ",v2[i]);
}