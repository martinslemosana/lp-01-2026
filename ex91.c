#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 20

int main(){
  int vet[M];

  srand(time(NULL));
  printf("Vet: ");
  for(int i=0;i<M;i++){
    vet[i] = rand()%10;
    printf("%d, ",vet[i]);
  }

  for(int i=0;i<M;i++){
    printf("\nValor %d: ",vet[i]);
    for(int j=0;j<M;j++){
      if(vet[i]==vet[j]){
        if(j<i)
          break;
        printf("%d, ",j);
      }
    }
  }
}