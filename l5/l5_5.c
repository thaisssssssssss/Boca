#include <stdio.h>
int main(){
int x = 0, qtd = 0, i = 0, aux = 0;

  scanf("%d", &x);
  scanf("%d", &qtd);

int num[qtd];

  
  for(i = 0; i < qtd; i++){
    scanf("%d", &num[i]);
  }

  for(i = 0; i < qtd; i++){
    if(num[i] == x){
      if(aux == 0){
        printf("RESP:%d", i);
      }
      aux++;
    }
  }

    if(aux == 0){
      printf("RESP:%d", qtd);
    }
}