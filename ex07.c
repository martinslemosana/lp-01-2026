#include <stdio.h>

int main(){
    int d, m, a;
    printf("Digite sua idade em dias, meses e anos.");
    printf("\nNúmero de dias: ");
    scanf("%d",&d);
    printf("Número de meses: ");
    scanf("%d",&m);
    printf("Número de anos: ");
    scanf("%d",&a);
    printf("Idade em número de dias: %d\n", d+m*30+a*365);
}