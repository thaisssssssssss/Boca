#include <stdio.h>

int main(){

  int linha, coluna, i, j;
  int somaTotal = 0, atual, somaLinha;

  scanf("%d %d", &linha, &coluna);


  for (i = 1; i<=linha; i++){
    somaLinha = 0;
    for(j = 1; j<=coluna; j++){
      scanf("%d", &atual);
      somaLinha += atual;
    }
    printf("%d\n", somaLinha);
    somaTotal += somaLinha;
  }

  printf("%d\n", somaTotal);

  return 0;
}
