#include <stdio.h>
int main(){
int n1 = 0, n2 = 0, i = 0, j = 0, cont = 0;

  scanf("%d", &n1);

  int a[n1];

  for(j = 0; j < n1; j++){
    scanf("%d", &a[j]);
  }

  scanf("%d", &n2);

  int b[n2];

  for(i = 0; i < n2; i++){
    scanf("%d", &b[i]);
  }

      for(j = 0; j < n1; j++){
        for(i = 0; i < n2; i++){
          if(a[j] == b[i]){
            cont++;
          }
        }
      }

      if(cont >= n1){
        printf("TODOS");
      }
      else if(cont < n1 && cont > 0){
        printf("PARCIAL");
      }
      else if(cont == 0){
        printf("NENHUM");
      }
}