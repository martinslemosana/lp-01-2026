#include <stdio.h>

int main(){
  int n, soma=0;

  for(int i=0;i<10;i++){
    printf("N: ");
    scanf("%d",&n);
    if(n<40)
      soma += n;
  }

  printf("\nSoma dos menores que 40: %d.\n",soma);
}