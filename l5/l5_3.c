#include <stdio.h>

int main(){
int qtd = 0, i = 0, maior = -1000, diferenca = 0;

  scanf("%d", &qtd);

int poste[qtd];

  for(i = 0; i < qtd; i++){
    scanf("%d", &poste[i]);
  }

  if(qtd == 1){
    printf("IMPOSSIVEL");
  }
  else{
      for(i = 0; i < qtd - 1; i++){
        diferenca = poste[i] - poste[i + 1];

        if(diferenca >= 0){
          diferenca = diferenca;
        }
        else if(diferenca < 0){
            diferenca = diferenca * -1;
        }

        if(diferenca > maior){
            maior = diferenca;
        }
      }
      for(i = 0; i < qtd - 1; i++){
          diferenca = poste[i] - poste[i + 1];

          if(diferenca >= 0){
            diferenca = diferenca;
          }
          else if(diferenca < 0){
              diferenca = diferenca * -1;
          }

          if(diferenca == maior){
            printf(" (%d %d)", i, i + 1);
          }
      }
  }
  return 0;
}