#include <stdio.h>
int main(){
int linha = 0, coluna = 0, valores = 0, l = 0, c = 0, v = 0, maior_valor = -1000000, saidaLinha = 0, saidaColuna = 0, i = 0;

  scanf("%d %d", &linha, &coluna);

  if(linha >= 1 && linha <=100 && coluna >= 1 && coluna <=100){
    for(l = 1; l <= linha; l++){
      for(c = 1; c <= coluna; c++){
          if(c == 1){
            scanf("  %d", &valores);
          }
          else{
            scanf("%d", &valores); 
          }
            if(valores > maior_valor){
              maior_valor = valores;
              saidaLinha = l;
              saidaColuna = c;
            }
            else{
              maior_valor = maior_valor;
            }  
      }  
    }
    printf("%d (%d, %d)", maior_valor, saidaLinha, saidaColuna);
  }
  
return 0; 
}