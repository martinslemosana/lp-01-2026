#include <stdio.h>

#define N 10

int main(){
  float v[N], somaPos=0;
  int contNeg=0;

  for(int i=0;i<N;i++){
    printf("v[%d] = ",i);
    scanf("%f",&v[i]);
  }

  for(int i=0;i<N;i++){
    if(v[i]<0)
      contNeg++;
    if(v[i]>=0)
      somaPos+=v[i];
  }

  printf("\nQuantidade de números negativos: %d",contNeg);
  printf("\nSoma dos números positivos: %.2f\n",somaPos);
}