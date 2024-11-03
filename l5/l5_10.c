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

void OrdenaCrescente(int vet[], int qtd){
int i = 0, k = 0, menor = 100000, j = -1, aux = 0, aux2 = 0, l = 0;

  for(i = 0; i < qtd; i++){
    j++;
          for(k = j; k < qtd; k++){
            if(vet[k] < menor){
              menor = vet[k];
              l = k;
            }
          }

    aux = vet[i];
    vet[i] = menor;
    vet[l] = aux;
    menor = 100000;
  }
}

int main(){
int qtd = 0, i = 0, menor = 0, inicio = -1; 
  scanf("%d", &qtd);

  int pos[qtd];

  for(i = 0; i < qtd; i++){
    scanf("%d", &pos[i]);
  }


  OrdenaCrescente(pos, qtd);
  ImprimeDadosDoVetor(pos, qtd);

  return 0;
}