#include <stdio.h>
int main(){
int num = 0, stopContagem = 0, num1 = 0, positivos = 0, negativos = 0, somaPositivos = 0, somaNegativos = 0;

  while(stopContagem == 0){
      if (scanf("%d", &num) == 1){
        num1 = num;

        if(num1 > 0){
          positivos++;
          somaPositivos = somaPositivos + num1;
        }
        else if(num1 < 0){
          negativos++;
          somaNegativos = somaNegativos + num1;
        }
      }
      else{
        stopContagem = 1;
      }
  }

    printf("%d %d %d %d", negativos, positivos, somaNegativos, somaPositivos);

return 0;
}

