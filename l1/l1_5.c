#include <stdio.h>
int main () {

int N1 = 0;
int N2 = 0;

scanf("%d %d", &N1, &N2);

  if (N1 > N2) {
    printf("N1 = %d", N1);
  }
  else if (N2 > N1) {
    printf("N2 = %d", N2);
  }
  else {
    printf("N1 = N2");
  }

return 0;
}