#include <stdio.h>

int main () {

int a, b;
scanf("%d %d", &a, &b);
  
if (a == b) {
  printf("RESP:%d", a);
}
else if (a > b) {
  printf("RESP:%d", b);
}
else if (a < b && b % a > 0) {
  printf("RESP:%d", (b % a));
}
else if (a < b && b % a == 0) {
  printf("RESP:%d", a);
}
  
return 0;
}