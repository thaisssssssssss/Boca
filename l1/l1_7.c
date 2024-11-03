#include <stdio.h>

int main () {

float temperatura;
char medida;

  scanf("%f %c", &temperatura, &medida);

  if (medida == 99 || medida == 67) {
    printf("%.2f (F)", ((temperatura * 9) / 5) + 32);  
  }  
  else if (medida == 70 || medida == 102) {
    printf("%.2f (C)", (temperatura - 32) * 5 / 9); 
  }
 
return 0;
}