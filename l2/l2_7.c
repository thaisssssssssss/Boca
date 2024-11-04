#include <stdio.h>
int main ()
{
int num, i = 1, divisores = 0, primo;
    scanf("%d", &num);

  for(i=1; i<=num; i++){
      if(num % i == 0){
        divisores++;
      }
  }

      if(divisores == 2){
        printf("Primo");
      }
      else {
        printf("Nao primo");
      }  
  
return 0;
}