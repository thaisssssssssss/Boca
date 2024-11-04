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

  printf("RESP:");
  for(contagem = 0; contagem < i; contagem++){
    if(caracteres[contagem] == ' '){
      caracteres[contagem] = '_';
      printf("%c", caracteres[contagem]);
    }
    else{
      printf("%c", caracteres[contagem]);
    }
  }

return 0;
}