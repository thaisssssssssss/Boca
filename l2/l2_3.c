#include <stdio.h>
int main () {
  int num = 0, numMaior, numMenor, soma = 0;
  int entrada = 0, qtd_num, qtd_impar = 0, qtd_par = 0;
  int inicioDeLeitura = 1;

  scanf("%d", &entrada);
  for(qtd_num = 1; qtd_num <= entrada; qtd_num++){
     while (qtd_num <= entrada){
       scanf("%d", &num);
        if(inicioDeLeitura == 1){
           numMaior = num;
           numMenor = num;
        }
   inicioDeLeitura = 0;
        if(num > numMaior){
           numMaior = num;
        }
        if (num < numMenor){
           numMenor = num;
        }
        if (num%2==0) {
            qtd_par = qtd_par + 1;
        }
        if (num%2!=0) {
            qtd_impar = qtd_impar + 1;
        }

      soma = soma + num;
       
    qtd_num++;
    }
}

float media;
  media = soma / (float) entrada;

  printf("%d ", numMaior);
  printf("%d ", numMenor);
  printf("%d ", qtd_par);
  printf("%d ", qtd_impar);
  printf("%.6f", media);
}
