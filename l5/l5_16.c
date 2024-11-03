#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int codigo;
  char sobrenome[21];
  char nome[21];
  int nota;
  int idade;
}   tCandidato;

int PrimeiroLugarAeB(tCandidato vet[], int a, int b){
int nota = 0, i = 0, first = 0, idade = 1000, codigo = 1000;

  for(i = a; i <= b; i++){
      if(vet[i].nota > nota){
        nota = vet[i].nota;
        idade = vet[i].idade;
        codigo = vet[i].codigo;
        first = i;
      }
      else if(vet[i].nota == nota){
        if(vet[i].idade < idade){
          idade = vet[i].idade;
          codigo = vet[i].codigo;
          first = i;
        }
        else if(vet[i].idade == idade){
          if(vet[i].codigo < codigo){
            codigo = vet[i].codigo;
            first = i;
          }
        }
      }
  }

  return first;
}

void TrocaVetAeB(tCandidato vet[], int j, int first){
  tCandidato aux;
  aux = vet[j];
  vet[j] = vet[first];
  vet[first] = aux;
}

tCandidato LeCandidato();
void ImprimeCandidato(tCandidato candidato);
void OrdenaCrescente(tCandidato * vet, int qtd){
int j = 0, ordem = 0;
  for(j = 0; j < qtd - 1; j++){
    ordem = PrimeiroLugarAeB(vet, j, qtd - 1);

    TrocaVetAeB(vet, j, ordem);
  }
}


int main(){
int qtdCand, i = 0, j;
  
  scanf("%d", &qtdCand);
  
  tCandidato candidatos[qtdCand];
  
  for(i = 0; i < qtdCand; i++){
    candidatos[i] = LeCandidato();
  }
  
  OrdenaCrescente(candidatos, qtdCand);
  
  for(i = 0; i < qtdCand; i++){
    ImprimeCandidato(candidatos[i]);
  }
  
  return 0;
}

tCandidato LeCandidato(){
tCandidato candidato;
  scanf("%*[^{]");
  scanf("%*[{ ]");
  scanf("%d", &candidato.codigo);
  scanf("%*[, ]");
  scanf("%[^,],", candidato.sobrenome);
  scanf("%*[ ]");
  scanf("%[^,],", candidato.nome);
  scanf("%d", &candidato.nota);
  scanf("%*[, ]");
  scanf("%d", &candidato.idade);
  scanf("%*[^\n]\n");
  return candidato;
}

void ImprimeCandidato(tCandidato candidato){
  printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n",
  candidato.codigo, candidato.nome,
  candidato.sobrenome, candidato.nota, candidato.idade);
}