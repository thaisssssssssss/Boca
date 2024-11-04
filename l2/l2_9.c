#include <stdio.h>
int main () {
  int n = 0, m = 0, i = 1, denominador = 1, divisores = 0, multiplos = 0, primo = 1, cont_primo = 0; 

scanf("%d %d", &n, &m);
  
  for (i = n + 1; i < m; i++){
    for(denominador=1; denominador <= i; denominador++){
        
        if(i % denominador == 0){
          divisores++;
        }
    }
    
    if(divisores==2){
      primo = i;
      printf("%d\n", primo);
    
    
    for(multiplos = primo + 1; multiplos < m; multiplos++){
      if(multiplos % primo == 0){
        printf("%d ", multiplos);
        cont_primo++;
      }
    }
      if (cont_primo == 0){
        printf("*");
      }
      printf("\n");

    }
    
    cont_primo = 0;
    divisores = 0;
  }

return 0;
}