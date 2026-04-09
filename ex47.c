#include <stdio.h>

int main(){
    float n1, n2;

    printf("N1: ");
    scanf("%f",&n1);
    do{
        printf("N2: ");
        scanf("%f",&n2);
        if(n2==0)
            printf("\nValor inválido!\n");
    }while(n2==0);
    printf("%.1f / %.1f = %.1f.\n",n1,n2,n1/n2);
}