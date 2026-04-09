#include <stdio.h>

int main(){
    float custoFabrica, percDistrib, impostos, custoFinal;

    printf("Custo de Fábrica: ");
    scanf("%f",&custoFabrica);
    percDistrib = 28;
    printf("\nPercentual do Distribuidor: %.2f%% = R$%.2f",percDistrib,(custoFabrica*percDistrib/100));
    impostos = 45;
    printf("\nImpostos: %.2f%% = R$%.2f",impostos,(custoFabrica*impostos/100));
    custoFinal = custoFabrica + (custoFabrica*percDistrib/100) + (custoFabrica*impostos/100);
    printf("\nCusto final ao consumidor: R$%.2f\n\n",custoFinal);
}