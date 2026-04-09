#include <stdio.h>

int main(){
    float n1, n2, media;
    char op = 's';
    while(op=='s' || op=='S'){
        printf("N1: ");
        scanf("%f",&n1);
        while(n1<0 || n1>10){
            printf("N1: ");
            scanf("%f",&n1);
        }
        printf("N2: ");
        scanf("%f",&n2);
        while(n2<0 || n2>10){
            printf("N2: ");
            scanf("%f",&n2);
        }
        media = (n1+n2)/2;
        printf("Média: %.2f.\n",media);
        printf("\nNovo Calculo? (s/n) ");
        scanf(" %c",&op);
        while(op!='s' && op!='S' && op!='n' && op!='N'){
            printf("\nNovo Calculo? (s/n) ");
            scanf(" %c",&op);
        }
    }
}