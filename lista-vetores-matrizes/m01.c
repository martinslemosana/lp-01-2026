#include <stdio.h>

int main(){
  int m[4][4], cont;

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("m[%d][%d] = ",i,j);
      scanf("%d",&m[i][j]);
    }
  }

  printf("M: \n");
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }

  cont=0;
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if(m[i][j]>10)
        cont++;
    }
  }

  printf("\n%d números maiores que 10.\n",cont);
}