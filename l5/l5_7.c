#include <stdio.h>
int main(){
int qtd = 0, i = 0, razao = 0, pa = 0;

  scanf("%d", &qtd);

  int seq[qtd];
  
  for(i = 0; i < qtd; i++){
    scanf("%d", &seq[i]);
  }

    if(qtd == 1){
      printf("NAO");
    }
    else{
      razao = seq[1] - seq[0];

      for(i = 0; i < qtd - 1; i++){
        if((seq[i + 1] - seq[i]) == razao){
          pa++;
        }
      }

      if(pa == qtd - 1){
         printf("RESP:%d", razao);
      }
      else{
         printf("NAO");
      }
    }
    
}