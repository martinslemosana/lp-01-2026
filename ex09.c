#include <stdio.h>

int main(){
    float salario, reajuste, novoSalario;

    printf("Salário atual: ");
    scanf("%f",&salario);
    printf("Percentual de reajuste: ");
    scanf("%f",&reajuste);
    novoSalario = salario + salario*(reajuste/100);
    printf("Novo salário: R$%.2f\n\n",novoSalario);
}