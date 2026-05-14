#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main(){
  int m[N][N], soma=0;

  srand(time(NULL));
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      m[i][j] = rand()%10;
    }
  }

  printf("\nMatriz: \n");
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }

  for(int i=1;i<N;i++){
    for(int j=0;j<i;j++){
      soma+=m[i][j];
    }
  }
  printf("\nSoma: %d\n",soma);
}