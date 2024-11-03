#include <stdio.h>

void ConcatenaVetores(int * seq1, int i, int * seq2, int k, int * seqOut){
int j = 0, qtd = 0, q = 0, l = 0;

    qtd = i + k;

    for(q = 0; q <= i; q++){
      seqOut[q] = seq1[q];
    }
    for(q = i, j = 0; qtd >= q && j < k; q++, j++){
      seqOut[q] = seq2[j];
    }

    for(l = 0; l < qtd; l++){
      //printf("%d ", seqOut[l]);
    }
}

void ImprimeSequencia(int vet[], int qtd, int seq1[], int n1, int seq2[], int n2){
int i = 0, a = 0, b = 0, j = 0, k = 0;

  for(i = 0; i < qtd; i++){

    for(j = a; j < n1; j++){
      if(vet[i] == seq1[j]){
        printf("A");
        a++;
      }
    }

    for(k = b; k < n2; k++){
      if(vet[i] == seq2[k]){
        printf("B");
        b++;
      }
    }
    
    
  }
}

void OrdenaSequencia(int vet[], int qtd){
int i = 0, k = 0, l = 0, j = -1, aux = 0, menor = 10000;

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
    menor = 10000;
  }
}

int main(){
int n1 = 0, n2 = 0, i = 0, k = 0;

  scanf("%d", &n1);

  int seq1[n1];

  for(i = 0; i < n1; i++){
    scanf("%d", &seq1[i]);
  }

  scanf("%d", &n2);

  int seq2[n2];

  for(k = 0; k < n2; k++){
    scanf("%d", &seq2[k]);
  }

  int seq12[i + k];
  ConcatenaVetores(seq1, i, seq2, k, seq12);
  int qtd = n1 + n2;

  
  OrdenaSequencia(seq2, n2);
  OrdenaSequencia(seq1, n1);
  OrdenaSequencia(seq12, qtd);
  ImprimeSequencia(seq12, qtd, seq1, n1, seq2, n2);

  return 0;
}