#include <stdio.h>

int main(){
    int h1, h2, m1, m2;
    printf("Idade primeiro homem: ");
    scanf("%d",&h1);
    printf("Idade segundo homem: ");
    scanf("%d",&h2);
    printf("Idade primeira mulher: ");
    scanf("%d",&m1);
    printf("Idade segunda mulher: ");
    scanf("%d",&m2);
    if(h1>=h2){
        if(m1<=m2){
            printf("\nHomem mais velho + Mulher mais nova: %d\n",h1+m1);
            printf("\nHomem mais novo * Mulher mais velha: %d\n",h2*m2);
        }
        else{
            printf("\nHomem mais velho + Mulher mais nova: %d\n",h1+m2);
            printf("\nHomem mais novo * Mulher mais velha: %d\n",h2*m1);
        }
        
    }
    else{
        if(m1<=m2){
            printf("\nHomem mais velho + Mulher mais nova: %d\n",h2+m1);
            printf("\nHomem mais novo * Mulher mais velha: %d\n",h1*m2);
        }
        else{
            printf("\nHomem mais velho + Mulher mais nova: %d\n",h2+m2);
            printf("\nHomem mais novo * Mulher mais velha: %d\n",h1*m1);
        }
    }
}