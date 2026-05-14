#include <stdio.h>

#define N 4

int main(){
  int m1[N][N], m2[N][N], m3[N][N];

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("m1[%d][%d] = ",i,j);
      scanf("%d",&m1[i][j]);
    }
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("m2[%d][%d] = ",i,j);
      scanf("%d",&m2[i][j]);
    }
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(m1[i][j]>m2[i][j])
        m3[i][j] = m1[i][j];
      else
        m3[i][j] = m2[i][j];
    }
  }

  printf("\nM1: \n");
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("%d\t",m1[i][j]);
    }
    printf("\n");
  }

  printf("\nM2: \n");
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("%d\t",m2[i][j]);
    }
    printf("\n");
  }

  printf("\nM3: \n");
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("%d\t",m3[i][j]);
    }
    printf("\n");
  }
}