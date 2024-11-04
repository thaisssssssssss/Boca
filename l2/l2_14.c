#include <stdio.h>
int main(){
int i = 0, stopChar = 0, contagem = 0;
char ultimoChar = 0;
char caracteres[100] = {};

  while(stopChar == 0){
    scanf("%c", &ultimoChar);
    if(ultimoChar == '!' || ultimoChar == '.' || ultimoChar == '?'){
      stopChar = 1;
    }
    caracteres[i] = ultimoChar;
    i++;
  }

  printf("RESP:");

  for(contagem = 0; contagem < i; contagem++){
    if(caracteres[contagem] != ' '){
      printf("%c", caracteres[contagem]);
    }
  }
  
return 0;
}