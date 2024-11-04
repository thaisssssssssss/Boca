#include <stdio.h>
int main() {

int n, m, i;
 scanf("%d %d", &n, &m);

  i = n;
  printf("RESP:");
  while (i<m){
    if (i>n && i%2 == +0) {
      printf("%d ", i);
    }
      i++;
  }
return 0;
}