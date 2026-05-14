#include <stdio.h>

#define N 10

int main(){
  int v[N], repetidos[N], contRep=0;

  for(int i=0;i<N;i++){
    printf("v[%d] = ",i);
    scanf("%d",&v[i]);
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(v[i]==v[j] && i!=j){
        if(j<i)
          break;
        repetidos[contRep] = v[i];
        contRep++;
        break;
      }
    }
  }

  printf("v: ");
  for(int i=0;i<N;i++)
    printf("%d, ",v[i]);
  if(contRep==0)
    printf("\nNão há repetidos.");
  else{
    printf("\nrepetidos: ");
    for(int i=0;i<contRep;i++)
      printf("%d, ",repetidos[i]);
  }
}