#include <stdio.h>
int main(){
int i = 0, contagem = 0, stopChar = 0;
char lastChar = 0;
char caracteres[100] = {};

  while(stopChar == 0){
    scanf("%c", &lastChar);
    if(lastChar == '.' || lastChar == '!' || lastChar == '?'){
      stopChar = 1;
    }
    caracteres[i] = lastChar;
    i++;
  }
  for(contagem = 0; contagem < i; contagem++){
    if(caracteres[contagem] >= 97 && caracteres[contagem] <= 122){
      printf("%c", caracteres[contagem] - 32);
    }
    else{
      printf("%c", caracteres[contagem]);
    }
  }
  
return 0;
}