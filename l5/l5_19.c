#include <stdio.h>

int main(){
int linha = 0, coluna = 0, l = 0, c = 0, terra = 0, predito = 0, horas = 0, h = 1;

  scanf("%d\n", &horas);
  scanf("%d %d\n", &coluna, &linha);

char matriz[linha][coluna];

  for(l = 0; l < linha; l++){
    for(c = 0; c < coluna; c++){
      matriz[l][c] = 0;
    }
  }

  for(l = 0; l < linha; l++){
    for(c = 0; c < coluna; c++){
      scanf("%c", &matriz[l][c]);
      if(matriz[l][c] == '0'){
        terra++;
      }
    }

    if(l != linha - 1){
      scanf("\n");
    }
  }

  for(h = 1; h <= horas; h++){
      for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
          
          if(matriz[l][c] == '0'){
            if(matriz[l - 1][c] == '1' || matriz[l + 1][c] == '1' || matriz[l][c + 1] == '1' || matriz[l][c - 1] == '1'){
              matriz[l][c] = '9';
            }
          }
        }
      }
    
      for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
          if(matriz[l][c] == '9'){
            matriz[l][c] = '1';
          }
        }
      }
  }
  
      for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
          if(matriz[l][c] == '0'){
            predito++;
          }
        }
      }
        
  printf("%d ", terra);
  printf("%d\n", predito);

  return 0;
}