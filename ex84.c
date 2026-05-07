#include <stdio.h>

#define M 50

int main(){
  int a[M], b[M], soma[M], n;

  printf("Digite o tamanho dos vetores (valor entre 0 e 50): ");
  scanf("%d",&n);
  while(n<0 || n>50){
    printf("\nValor invalido!");
    printf("\nDigite o tamanho dos vetores (valor entre 0 e 50): ");
    scanf("%d",&n);
  }

  for(int i=0;i<n;i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
  }

  for(int i=0;i<n;i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
  }

  for(int i=0;i<n;i++){
    soma = a[i] + b[i];
  }

  printf("\nSoma: ");
  for(int i=0;i<n;i++){
    printf("%d, ",soma[i]);
  }
}