#include <stdio.h>
int main () {
int num = 1, maiorNum, soma = 0;
float media;
int qtd_num, qtd = 0;
int inicioDeLeitura = 1;
  
  
  while (num != 0){
    scanf("%d", &num);
    
    if(inicioDeLeitura == 1){
      maiorNum = num;
    }
    inicioDeLeitura = 0;
    
    if(num > maiorNum){
      maiorNum = num;
    }
    
    if (num != 0){
       qtd++;
    soma = soma + num;
    media = (float)soma / qtd;
    printf("%d ", maiorNum);
    printf("%.6f\n", media);
  }
  } 
return 0;
}