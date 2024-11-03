#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int codigo;
  char sobrenome[21];
  char nome[21];
  int nota;
  int idade;
}  tCandidato;

tCandidato LeCandidato();
void ImprimeCandidato(tCandidato candidato);

int ComparaString(char * str1, char * str2){
int i = 0, k = 0, qtd = 0, j = 0;

  for(i = 0; str1[i]; i++){

  }
  for(k = 0; str2[k]; k++){

  }

    if(i == k){
      for(j = 0; j <= i; j++){
        if(str1[j] == str2[j]){
          qtd++;
        }
      }

      if(qtd == i + 1){
        return 1;
      }
      else{
        return 0;
      }
    }
    else{
      return 0;
    }
}

int main(){
int qtdCand, i = 0, k = 0, j = 0, ehigual = 0, x = 0, num = -1, num2 = -1, p = 0;
  scanf("%d", &qtdCand);
tCandidato candidatos[qtdCand];


  for(i = 0; i < qtdCand; i++){
    candidatos[i] = LeCandidato();
  }

  int verificada[i];

    for(p = 0; p < qtdCand; p++){
      verificada[p] = 0;
    }

  int a = 0;
    for(j = 0; j <= i; j++){
      for(k = j + 1; k <= i; k++){
        ehigual = ComparaString(candidatos[j].sobrenome, candidatos[k].sobrenome);


        if(ehigual == 1){
          if(verificada[k] != 1){
            if(x == 0){
              ImprimeCandidato(candidatos[j]);
              ImprimeCandidato(candidatos[k]);
              verificada[k] = 1;
              verificada[j] = 1;
              x++;
            }
            else if(x > 0){
              ImprimeCandidato(candidatos[k]);
              verificada[k] = 1;
            }
          }
        }
      }
      x = 0;
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