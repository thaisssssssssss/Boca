#include <stdio.h>

void IniciaImpressao(){
char texto = '\0';
int abre = 1, fecha = 0, t = 0;

  while(1){
    scanf("%c", &texto);

    if(texto == '('){
      abre++;
    }
    else if(texto == ')'){
      fecha++;
    }

      if(abre == fecha){
        break;
      }
      if(fecha < abre){
        printf("%c", texto);  
      }

  }

}

int main(){
char texto = '\0';
int abre = 0, fecha = 0, t = 0;

  printf("RESP:");
  while(1){
    scanf("%c", &texto);

    if(texto == '.'){
      break;
    }
    else if(texto == '('){
      IniciaImpressao();
    }

  }
  return 0;
}