#include <stdio.h>

int main(){
  int a, b, den=1, i=1, mdc=0, mmc=0, limMDC, limMMC;

  scanf("%d %d", &a, &b);


  //Acha limites da busca
  if (a < b){ 
    limMDC = a;
    limMMC = b;
  } else {
    limMDC = b;
    limMMC = a;
  }

  //MDC
  for(den=1; den <= limMDC; den++){   
    if(!(a%den) && !(b%den)){ 
      mdc = den;
    }
  }  

  //MMC
  for(i = limMMC; i >= limMMC; i++){
    if (!(i%a) && !(i%b)) {
      mmc = i;
      break;
    }
  }
  
  printf("%d %d", mdc, mmc);

  return 0;
}