#include <stdio.h>
int main(){
int num = 0, i = 0, qtd = 0, decre = 0, cres = 0, iguais = 0;

  scanf("%d", &qtd);
  
int nota[qtd];

  for(i = 0; i < qtd; i++){
    scanf("%d", &nota[i]);
  }

  if(qtd == 1){
    printf("CRESCENTE&DECRESCENTE");
  }
  else{
      for(i = 0; i < qtd - 1; i++){
          if(nota[i] <= nota[i + 1]){
            cres++;
          }
          if(nota[i] >= nota[i + 1]){
            decre++;
          }
          if(nota[i] == nota[i + 1]){
            iguais++;
          }
      }

          if(iguais == qtd - 1){
              printf("CRESCENTE&DECRESCENTE");
          }
          else if(cres == qtd - 1){
            printf("CRESCENTE");
          }
          else if(decre == qtd - 1){
                printf("DECRESCENTE");
          }
          else{
            printf("DESORDENADO");
          }
  }
  
}