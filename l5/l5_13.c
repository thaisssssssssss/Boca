#include <stdio.h>
#include <stdlib.h>

int ComparaString(char * str1, char * str2){
int i = 0, k = 0, q = 0, cont = 0;

  for(i = 0; str1[i]; i++){
    
  }
  for(k = 0; str2[k]; k++){
    
  }

  if(i == k){
    for(q = 0; q <= i; q++){
      if(str1[q] == str2[q]){
        cont++;
      }
    }

      if(cont == i + 1){
        return 1;
      }
      else{
        return 0;
      }
  }
  else{
    return 0;
  }
    
}


int main(){
char str1[1000];
char str2[1000];

  while ( scanf("%s ", str1) == 1 && scanf("%s\n", str2) == 1){
      if ( ComparaString(str1, str2) ){
          printf("IGUAL\n");
      }
      else{
          printf("DIFERENTE\n");
      }
      }
return 0;
}