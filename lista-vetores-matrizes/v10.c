#include <stdio.h>

#define N 15

int main(){
  float alunos[N], soma=0, media;

  for(int i=0;i<N;i++){
    do{
      printf("Digite uma nota entre 0 e 10.");
      printf("\nAluno %d: ",i+1);
      scanf("%f",&alunos[i]);
    }while(alunos[i]<0 || alunos[i]>10);
  }
  
  printf("\nNotas: ");
  for(int i=0;i<N;i++){

    soma += alunos[i];
  }
  media = soma/N;
  printf("\nMedia geral: %.2f",media);
}