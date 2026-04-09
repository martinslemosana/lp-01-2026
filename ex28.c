#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);
    printf("N3: ");
    scanf("%d",&n3);
    if(n1>=n2 && n1>=n3)
        printf("\n%d é o maior.\n",n1);
    else{
        if(n2>=n1 && n2>=n3)
            printf("\n%d é o maior.\n",n2);
        else
            printf("\n%d é o maior.\n",n3);
    }
}