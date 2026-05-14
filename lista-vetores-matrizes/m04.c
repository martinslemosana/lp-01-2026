#include <stdio.h>

#define N 4

int main(){
  int m[N][N], maior, linhaMaior, colunaMaior;

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("m[%d][%d] = ",i,j);
      scanf("%d",&m[i][j]);
    }
  }
  maior = m[0][0];
  linhaMaior = 0;
  colunaMaior = 0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(m[i][j]>maior){
        maior = m[i][j];
        linhaMaior = i;
        colunaMaior = j;
      }
    }
  }

  printf("\nMatriz: \n");
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
  printf("\nMaior: %d",maior);
  printf("\nLinha maior: %d",linhaMaior);
  printf("\nColuna maior: %d\n",colunaMaior);
}