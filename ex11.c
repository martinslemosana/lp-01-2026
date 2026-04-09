 #include <stdio.h>

 int main(){
    int carrosVendidos;
    float valorTotalVendas, salarioFixo, comissao;

    printf("Número de carros vendidos: ");
    scanf("%d",&carrosVendidos);
    printf("Valor total das vendas: ");
    scanf("%f",&valorTotalVendas);
    printf("Salário fixo: ");
    scanf("%f",&salarioFixo);
    printf("Comissão: ");
    scanf("%f",&comissao);
    printf("\nSalário final: R$%.2f\n\n",salarioFixo+0.05*valorTotalVendas+carrosVendidos*comissao);
 }