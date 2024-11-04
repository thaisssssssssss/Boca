#include <stdio.h>
int main () {

int n, m, i;
  scanf("%d %d", &n, &m);

while (i<m){
  if(i>n && i%3 == 0){
    printf("%d ", i);
    }
  else if (i>n && i%4 == 0){
    printf("%d ", i);
    }
  else if (i>n && i%7 == 0){
    printf("%d ", i);
    }
  i++;
  }
return 0;
}