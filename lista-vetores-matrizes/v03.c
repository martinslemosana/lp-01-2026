#include <stdio.h>

int main(){
  int v1[10], v2[10];

  for(int i=0;i<10;i++){
    printf("v1[%d] = ",i);
    scanf("%d",&v1[i]);
  }

  for(int i=0;i<10;i++)
    v2[i] = v1[i]*v1[i];

  printf("\nv1: ");
  for(int i=0;i<10;i++)
    printf("%d, ",v1[i]);
  
  printf("\nv2: ");
  for(int i=0;i<10;i++)
    printf("%d, ",v2[i]);
}