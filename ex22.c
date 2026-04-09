#include <stdio.h>

int main(){
    int nHoras, horasExtras;
    float salarioHora, salario;

    printf("Número de horas trabalhadas no mês: ");
    scanf("%d",&nHoras);
    printf("Salário por hora: ");
    scanf("%f",&salarioHora);
    horasExtras = nHoras - 40*4;
    printf("\nHoras extras: %d",horasExtras);
    if(horasExtras <= 0)
        salario = salarioHora*nHoras;
    else
        salario = salarioHora*40*4 +  ((float)horasExtras)*salarioHora*1.5;
    printf("\nSalário final: R$%.2f\n",salario);
}