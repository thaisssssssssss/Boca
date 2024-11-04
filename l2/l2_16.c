#include <stdio.h>
int main(){
int seq1 = 0, seq2 = 0, i = 1, resultado = 0, menor = 32000, qtd_num = 0, posicao1 = -1, posicao2 = -1, l = 1;
char c;
  
  while(i){
    if(scanf("%d", &seq1) == 1){
      if(seq1 < menor){
        menor = seq1;
      }
    }
    else{
      break;
    } 
  }


  while(i){
    if(scanf("%c%d", &c, &seq2) == 2){

        if(seq2 == menor && l == 1){
            posicao1 = qtd_num;
            l++;
          }
          if(seq2 == menor){
            posicao2 = qtd_num;
          }
        qtd_num++;
        }
      else{
        break;
      }
  }

  if(posicao1 == -1 && posicao2 == -1){
    printf("%d %d %d", menor, qtd_num, qtd_num);
  }
  else{
    printf("%d %d %d", menor, posicao1, posicao2);
  }


return 0;
}
