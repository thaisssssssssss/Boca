#include <stdio.h>
int main () {

int primo = 0, entrada = 0;

scanf("%d", &entrada);

  for(primo = 1; primo <= entrada; primo++){
int divisores = 1;
int num_divisores = 0;

  while(divisores <= entrada){
    if(primo % divisores == 0){
      num_divisores++;
    }
  divisores++;
  }

  if(num_divisores==2){
    printf("%d ", primo);
  }
}
  return 0;
}