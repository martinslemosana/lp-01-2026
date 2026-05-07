#include <stdio.h>

int main(){
  float notas[10], soma=0, media;
  int cont=0;

  for(int i=0;i<10;i++){
    printf("Nota %d: ",i+1);
    scanf("%f",&notas[i]);
    soma += notas[i];
  }
  media = soma/10;

  for(int i=0;i<10;i++){
    if(notas[i]>media)
      cont++;
  }

  printf("\nMedia: %.2f",media);
  printf("\nNotas acima da media: %d",cont);
}