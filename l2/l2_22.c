#include <stdio.h>
int main (){
int num, n8 = 0, n81 = 0, n7 = 0, n71 = 0, n6 = 0, n61 = 0, n5 = 0, n51 = 0, n4 = 0, n41 = 0, n3 = 0, n31 = 0, n2 = 0, n21 = 0, n1 = 0, n11 = 0, soma1;
int s4 = 0, s41 = 0, s3 = 0, s31 = 0, s2 = 0, s21 = 0, s1 = 0, s11 = 0, soma2;
int k2 = 0, k21 = 0, k1 = 0, k11 = 0, soma3;

  scanf("%d", &num);

  if(num > 0){
    n8 = num / 10000000;
    n81 = num % 10000000;
    n7 = n81 / 1000000;
    n71 = n81 % 1000000;
    n6 = n71 / 100000;
    n61 = n71 % 100000;
    n5 = n61 / 10000;
    n51 = n61 % 10000;
    n4 = n51 / 1000;
    n41 = n51 % 1000;
    n3 = n41 / 1000;
    n31 = n41 % 1000;
    n2 = n31 / 100;
    n21 = n31 % 100;
    n1 = n21 / 10;
    n11 = n21 % 10;
    
    soma1 =  n8 + n7 + n6 + n5 + n4 + n3 + n2 + n1 + n11;
  }

  printf("RESP:");
  if(soma1 > 9){
    s4 = soma1 / 1000;
    s41 = soma1 % 1000;
    s3 = s41 / 1000;
    s31 = s41 % 1000;
    s2 = s31 / 100;
    s21 = s31 % 100;
    s1 = s21 / 10;
    s11 = s21 % 10;

    soma2 = s4 + s3 + s2 + s1 + s11;

    if(soma2 > 9){
      k2 = soma2 / 100;
      k21 = soma2 % 100;
      k1 = k21 / 10;
      k11 = k21 % 10;

      soma3 = k2 + k1 + k11;
      printf("%d", soma3);
    }
    else{
      printf("%d", soma2);
    }
  }
  else{
    printf("%d", soma1);
  }

return 0;
}

