#include <stdio.h>

#define N 6

int main(){
  int v[N];

  for(int i=0;i<N;i++){
    do{
      printf("Digite um valor par.");
      printf("\nv[%d] = ",i);
      scanf("%d",&v[i]);
    }while(v[i]%2!=0);
  }

  printf("\nv: ");
  for(int i=0;i<N;i++)
    printf("%d, ",v[i]);
  printf("\nOrdem inversa: ");
  for(int i=N-1;i>=0;i--)
    printf("%d, ",v[i]);
  printf("\n");
}