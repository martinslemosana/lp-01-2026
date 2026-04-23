#include <stdio.h>

int main(){
  int n, cont=0;

  for(int i=0;i<10;i++){
    printf("N: ");
    scanf("%d",&n);
    if(n<0)
      cont++;
  }
  printf("\n%d números negativos.\n",cont);
}