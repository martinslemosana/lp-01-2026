#include <stdio.h>

int main(){
  int n1, n2, soma=0;
  printf("N1: ");
  scanf("%d",&n1);
  printf("N2: ");
  scanf("%d",&n2);
  
  for(int i=n1; i<=n2; i++)
    soma += i;
  
  printf("\nSoma: %d.\n",soma);
}