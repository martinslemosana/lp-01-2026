#include <stdio.h>

int main(){
    int n;
    printf("Número de maçãs compradas: ");
    scanf("%d",&n);
    if(n<12)
        printf("Valor total: R$%.2f\n",(float)n*1.30);
    else
        printf("Valor total: R$%.2f\n",(float)n*1.00);
}