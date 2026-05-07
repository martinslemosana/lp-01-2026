#include <stdio.h>

#define M 10

int main(){
  int a[M], m[M], x;

  for(int i=0;i<M;i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
  }

  printf("X = ");
  scanf("%d",&x);

  for(int i=0;i<M;i++){
    m[i] = x * a[i];
  }

  printf("m: ");
  for(int i=0;i<M;i++){
    printf("%d, ",m[i]);
  }
}