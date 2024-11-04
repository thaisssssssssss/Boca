#include <stdio.h>
int main(){
int opcao, chave, i = 1, codificado = 0, space = 0;
char texto, espaco;

  scanf("%d %d", &opcao, &chave);

  chave = chave % 26;

  
  if(opcao == 1 || opcao == 2){
    while(i){
      
      if(space == 0){
        scanf("%c%c", &espaco, &texto);
        space++;
      }
      else{
        scanf("%c", &texto);
      }
      
      
        if(texto != '.'){
        
          if(opcao == 1){
            if(texto >= 'a' && texto <= 'z'){

              if((texto + chave) > 'z'){
                texto = ('a' - 1) + ((texto + chave) % 'z');
                printf("%c", texto);
              }
              else if ((texto + chave) <= 'z'){
                texto = texto + chave;
                printf("%c", texto);
              }
            }
            else{
              printf("%c", texto);
            }
            
          }
          else if(opcao == 2){

            if(texto >= 'a' && texto <= 'z'){

              if((texto - chave) < 'a'){
                  texto = ('z' - (('a' - 1) - (texto - chave)));
                printf("%c", texto);
              }
              else if ((texto - chave) >= 'a'){
                  texto = texto - chave;
                printf("%c", texto);
              }  
            }
            else{
              printf("%c", texto);
            }
            
          }  
        }
        else{
        printf("%c", texto);
        break;
        }
 
    }
  }
  else{
    printf("Operacao invalida.");
  }
}

  
