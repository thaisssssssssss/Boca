#include <stdio.h>
int main() {

float x1, y1, x2, y2, subtracao1, subtracao2, soma;
  
scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

  if (x1 > x2) {
    subtracao1 = x1 - x2;
  }
  else {
    subtracao1 = x2 - x1;
  }
  
  if (y1 > y2) {
    subtracao2 = y1 - y2;
  }  else {
    subtracao2 = y2 - y1;
  }
  
  soma = subtracao1 * 2 + subtracao2 * 2;

printf("%.2f", soma);
  
return 0;  
}