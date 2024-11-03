#include <stdio.h>
#include <math.h>

int main () {

int a, b;
float sum;

scanf("%d %d", &a, &b);

sum = sqrt(a) + sqrt(b);

printf("%.2f", sum);

return 0;
}
