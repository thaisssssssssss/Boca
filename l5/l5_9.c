#include <stdio.h>

void ImprimeDadosDoVetor(int vet[], int qtd){
int i = 0;

  printf("{");
    for(i = 0; i < qtd; i++){
      if(i == qtd - 1){
        printf("%d", vet[i]);
      }
      else{
        printf("%d, ", vet[i]);
      }
    }
  printf("}");

}

void InverteVetor(int * vet, int qtd){
int i = 0, j = 0, aux = 0, aux2 = 0;

  if(qtd % 2 == 0){
    for(i = 0, j = qtd - 1; i <= j && j >= i; i++, j--){
      aux = vet[i];
      aux2 = vet[j];
      vet[i] = aux2;
      vet[j] = aux;
    }
  }
  else if(qtd % 2 != 0){
    for(i = 0, j = qtd - 1; i < j && j > i; i++, j--){
      aux = vet[i];
      aux2 = vet[j];
      vet[i] = aux2;
      vet[j] = aux;
    }
  }

} 

int main(){
int qtd = 0, i = 0;
  scanf("%d", &qtd);

  int posicao[qtd];

  for(i = 0; i < qtd; i++){
    scanf("%d", &posicao[i]);
  }

  InverteVetor(posicao, qtd);
  ImprimeDadosDoVetor(posicao, qtd);
  
  return 0;
}