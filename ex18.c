#include <stdio.h>

int main(){
    int anoAtual, anoNasc, idade;

    printf("Ano atual: ");
    scanf("%d",&anoAtual);
    printf("Ano de nascimento: ");
    scanf("%d",&anoNasc);
    idade = anoAtual - anoNasc;
    if(idade>=16)
        printf("\nVocê pode votar!\n");
    else
        printf("\nVocê não pode votar!\n");
}