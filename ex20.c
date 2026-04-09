#include <stdio.h>

int main(){
    int n1, n2;
    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);
    if(n1<=n2)
        printf("\n%d, %d.\n",n1,n2);
    else
        printf("\n%d, %d.\n",n2,n1);
}