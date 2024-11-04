#include <stdio.h>
int main () {
int n = 0, m = 0, tabuada = 0, mult = 0;

scanf("%d %d", &n, &m);
  
  for(tabuada = n; tabuada <= m; tabuada++){
    for(mult = 1; mult <= 10; mult++){
      printf("%d x %d = %d\n", tabuada, mult, tabuada * mult);
    }
  }

return 0; 
}