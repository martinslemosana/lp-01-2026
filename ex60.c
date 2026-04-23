#include <stdio.h>

int main(){
  int n, cont=0;
  for(int i=0;i<10;i++){
    printf("N: ");
    scanf("%d",&n);
    if(n>=10 && n<=20)
      cont++;
  }
  printf("\n%d números no intervalo [10,20].\n",cont);
}