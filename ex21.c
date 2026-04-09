#include <stdio.h>

int main(){
    int hInicio, hFim, tempoTotal;
    printf("Hora de inicio: ");
    scanf("%d",&hInicio);
    printf("Hora do fim: ");
    scanf("%d",&hFim);
    if(hFim<hInicio)
        tempoTotal = 24-hInicio + hFim;
    else
        tempoTotal = hFim - hInicio;
    printf("\nA partida durou %d horas.\n",tempoTotal);

}