#include <stdio.h>

int main(){
    int total, brancos, nulos, validos;
    printf("Número total de eleitores: ");
    scanf("%d",&total);
    printf("Número de votos brancos: ");
    scanf("%d",&brancos);
    printf("Número de votos nulos: ");
    scanf("%d",&nulos);
    printf("Número de votos válidos: ");
    scanf("%d",&validos);
    printf("\nPercentuais:");
    printf("\nBrancos: %.1f%%",((float)brancos/total)*100);
    printf("\nNulos: %.1f%%",((float)nulos/total)*100);
    printf("\nVálidos: %.1f%%\n\n",((float)validos/total)*100);
}