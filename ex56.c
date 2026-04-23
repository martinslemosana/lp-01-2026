#include <stdio.h>

int main(){
  int n;
  printf("Digite um valor entre 1 e 10: ");
  scanf("%d",&n);
  while(n<1 || n>10){
    printf("\nValor incorreto!");
    printf("\nDigite um valor entre 1 e 10: ");
    scanf("%d",&n);
  }
  for(int i=1;i<10;i++){
    printf("%d x %d = %d\n",n,i,n*i);
  }
}