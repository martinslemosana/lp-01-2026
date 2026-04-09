#include <stdio.h>

int main(){
    float f, c;

    printf("Graus Fahrenheit: ");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("\n%.2f graus Celsius.\n\n",c);
}