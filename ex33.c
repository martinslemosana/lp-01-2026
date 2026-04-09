#include <stdio.h>

int main(){
    int n1, n2;
    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);
    if(n1==n2)
        printf("\nNúmeros iguais.\n");
    else
        if(n1>n2)
            printf("\nPrimeiro é maior.\n");
        else
            printf("\nSegundo maior.\n");
}