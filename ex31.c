#include <stdio.h>

int main(){
    float a, b, c;
    printf("A: ");
    scanf("%f",&a);
    printf("B: ");
    scanf("%f",&b);
    printf("C: ");
    scanf("%f",&c);
    if(a<b+c && b<a+c && c<a+b){
        if(a==b && a==c)
            printf("\nTriângulo equilátero.\n");
        else
            if(a==b || b==c || a==c)
                printf("\nTriângulo isósceles.\n");
            else
                printf("\nTriângulo escaleno.\n");
    }
    else{
        printf("\nNão formam um triângulo.\n");
    }
}