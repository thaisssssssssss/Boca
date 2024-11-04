#include <stdio.h>
#include <math.h>
int main () {

int n, k = 1; 
float calc_pi, somatoria = 0, pi;

  scanf("%d", &n);
  
while(k <= n){

  calc_pi = 6 / (pow(k,2));

  somatoria += calc_pi;
  
  k++;
}
  pi = sqrt(somatoria);
  printf("%.6f", pi);
}