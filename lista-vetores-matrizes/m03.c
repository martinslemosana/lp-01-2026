#include <stdio.h>

#define N 4

int main(){
  int m[N][N];

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      m[i][j] = i*j;
    }
  }

  printf("\nMatriz:\n");
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
}