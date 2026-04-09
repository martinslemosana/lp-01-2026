#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);
    printf("N3: ");
    scanf("%d",&n3);
    printf("\nSoma dos dois maiores: ");
    if(n1>=n2 && n1>=n3){
        if(n2>=n3)
            printf("%d.\n",n1+n2);
        else
            printf("%d.\n",n1+n3);
    }
    else{
        if(n2>=n1 && n2>=n3){
            if(n1>=n3)
                printf("%d.\n",n2+n1);
            else
                printf("%d.\n",n2+n3);
        }
        else{
            if(n1>=n2)
                printf("%d.\n",n3+n1);
            else
                printf("%d.\n",n3+n2);
        }
    }
}