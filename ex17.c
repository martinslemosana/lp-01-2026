#include <stdio.h>

int main(){
    float n1, n2, media;

    printf("Nota 1: ");
    scanf("%f",&n1);
    printf("Notas 2: ");
    scanf("%f",&n2);
    media = (n1+n2)/2;
    printf("\nMédia: %.2f",media);
    if(media>=6)
        printf("\nAprovado.\n");
    else
        printf("\nReprovado.\n");
}