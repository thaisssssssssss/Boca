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

void TrocaParEImpar(int vet[], int qtd){
int i = 0, j = 1, aux = 0, aux2 = 0;
  if(qtd % 2 == 0){
    for(i = 0, j = 1; i < qtd - 1 && j <= qtd - 1; i+=2, j+=2){
      aux = vet[i];
      aux2 = vet[j];
      vet[i] = aux2;
      vet[j] = aux;
    }
  }
  else if(qtd % 2 != 0){
      for(i = 0, j = 1; i <= qtd - 1 && j < qtd - 1; i+=2, j+=2){
        aux = vet[i];
        aux2 = vet[j];
        vet[i] = aux2;
        vet[j] = aux;
      }
  }

  ImprimeDadosDoVetor(vet, qtd);
} 

int main(){
int qtd = 0, i = 0;
  scanf("%d", &qtd);

  int vet[qtd];

  for(i = 0; i < qtd; i++){
    scanf("%d", &vet[i]);
  }

  TrocaParEImpar(vet, qtd);

return 0;
}