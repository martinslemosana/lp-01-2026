#include <stdio.h>

int main(){
  int n;
  printf("Digite um número maior que zero: ");
  scanf("%d",&n);
  while(n<=0){
    printf("\nValor incorreto!");
    printf("\nDigite um número maior que zero: ");
    scanf("%d",&n);
  }
  for(int i=1;i<=n;i++)
    printf("%d ",i);
}