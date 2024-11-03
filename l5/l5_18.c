#include <stdio.h>

int main(){
int linha1 = 0, coluna1 = 0, l1 = 0, c1 = 0;
int linha2 = 0, coluna2 = 0, l2 = 0, c2 = 0;
int qtdMatrizes = 0, t = 1;

  scanf("%d", &qtdMatrizes);

  for(t = 1; t <= qtdMatrizes; t++){
    
      scanf("%d %d\n", &coluna1, &linha1);
    int matriz1[linha1][coluna1];

      scanf("  ");
      for(l1 = 0; l1 < linha1; l1++){
        for(c1 = 0; c1 < coluna1; c1++){
          scanf("%d", &matriz1[l1][c1]);
        }
        scanf("  ");
      }
      for(l1 = 0; l1 < linha1; l1++){
        for(c1 = 0; c1 < coluna1; c1++){
          //printf("%d ", matriz1[l1][c1]);
        }
        //printf("\n");
      }
    
      scanf("%d %d\n", &coluna2, &linha2);
      int matriz2[linha2][coluna2];

      scanf("  ");
        for(l2 = 0; l2 < linha2; l2++){
          for(c2 = 0; c2 < coluna2; c2++){
            scanf("%d", &matriz2[l2][c2]);
          }
          scanf("  ");
        }
    
      for(l2 = 0; l2 < linha2; l2++){
        for(c2 = 0; c2 < coluna2; c2++){
          //printf("%d ", matriz2[l2][c2]);
        }
        //printf("\n");
      }
    
      int matriz3[linha1][coluna2];
      int c3 = 0, l3 = 0, c31 = 0, c32 = 0, l31 = 0, mult = 0, soma = 0, igual = 0, valor1 = 0, aux = 0;
    
      for(l3 = 0; l3 < linha1; l3++){
        for(c3 = 0; c3 < coluna2; c3++){
          matriz3[l3][c3] = 0;
        }
      }
      
      
      if(coluna1 == linha2){
        
        for(l3 = 0; l3 < linha1; l3++){
          for(c3 = 0; c3 < coluna2; c3++){
            for(aux = 0; aux < linha2; aux++){
               matriz3[l3][c3] =  matriz3[l3][c3] + matriz1[l3][aux] * matriz2[aux][c3];
            } 
          }
        }
    
        for(l3 = 0; l3 < linha1; l3++){
          for(c3 = 0; c3 < coluna2; c3++){
               printf("%d ", matriz3[l3][c3]);
          }
          printf("\n");
        }
        printf("\n");
      }
      else{
        printf("IMPOSSIVEL\n");
        printf("\n");
      }
  }
}
  