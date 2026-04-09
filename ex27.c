#include <stdio.h>

int main(){
    int n;
    printf("N: ");
    scanf("%d",&n);
    if(n==0)
        printf("\nZero.\n");
    else{
        if(n>0)
            printf("\nNúmero positivo.\n");
        else
            printf("\nNúmero negativo.\n");
    }
}