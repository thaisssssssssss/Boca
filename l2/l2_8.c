#include <stdio.h>
int main () {
  int n = 0, m = 0, i = 1, denominador = 1, divisores = 0;

scanf("%d %d", &n, &m);
  printf("RESP:");
  for (i = n + 1; i < m; i++){
    for(denominador=1; denominador <= i; denominador++){

        if(i % denominador == 0){
          divisores++;
        }
    }
    if(divisores==2){
    printf("%d ", i);
    }

  divisores = 0;
  }
return 0;
}