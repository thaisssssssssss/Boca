#include <stdio.h>

int main () {
  
int a;
int b;
float media; 
  
scanf("%d %d", &a, &b);

media = ((float)a + (float)b) / 2;

if (media >= 7) {
  printf("%.1f - Aprovado", media);
}
else if (media < 5) {
  printf("%.1f - Reprovado", media);
}
else {
  printf("%.1f - De Recuperacao", media);
}
  
return 0;
}