#include <stdio.h>

#define N 5

int main(){
  int m[5][5], x, cont=0;

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("m[%d][%d] = ",i,j);
      scanf("%d",&m[i][j]);
    }
  }

  printf("\nMatriz: \n");
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }

  printf("X: ");
  scanf("%d",&x);

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(m[i][j] = x){
        printf("\nEncontrado na linha %d, coluna %d",i,j);
        cont++;
      }
    }
  }
  if(cont==0)
    printf("\nNão encontrado.");
  printf("\n");
}