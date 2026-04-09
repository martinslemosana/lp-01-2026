#include <stdio.h>

int main(){
    float litros, valor;
    char combustivel;

    printf("Número de litros vendidos: ");
    scanf("%f",&litros);
    printf("Combustível (A-Álcool, G-Gasolina): ");
    scanf(" %c",&combustivel);
    while(combustivel!='A' && combustivel!='G'){
        printf("Combustível (A-Álcool, G-Gasolina): ");
        scanf(" %c",&combustivel);
    }
    if(combustivel=='A')
        valor = 2.9 * litros;
    else
        valor = 3.3 * litros;
    printf("\nValor a ser pago: R$%.2f.\n",valor);
}