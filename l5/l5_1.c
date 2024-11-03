#include <stdio.h>
#include <math.h>

int main(){
int qtd = 0, i = 0, maior = 0, menor = 100, acima = 0, repro = 0;

  scanf("%d", &qtd);

int aluno[qtd];
float media = 0, soma = 0;
  
  for(i = 0; i < qtd; i++){
    scanf("%d", &aluno[i]);
        if(aluno[i] > maior){
          maior = aluno[i];
        }
        if(aluno[i] < menor){
          menor = aluno[i];
        }
    soma += aluno[i];
  }

  media = soma / (float)qtd;
  
  for(i = 0; i < qtd; i++){
    if(aluno[i] > media){
      acima++;
    }
    if(aluno[i] < 70){
      repro++;
    }
  }

  float somatorio = 0, equacao = 0, desvio = 0;
  
  for(i = 0; i < qtd; i++){
    equacao = pow(((float)aluno[i] - media), 2);
    somatorio += equacao;
  }
  
  desvio = somatorio * (1 / (float)qtd);
  desvio = sqrt(desvio);

  printf("MENOR:%d, ", menor);
  printf("MAIOR:%d, ", maior);
  printf("MEDIA:%.2f, ", media);
  printf("STD:%.2f, ", desvio);
  printf("ACIMA_MEDIA_CONC:%d, ", acima);
  printf("REPROV:%d", repro);
}
