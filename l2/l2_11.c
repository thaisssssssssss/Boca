#include <stdio.h>
int main () {
int n, m, i, a, b, c, d, metade1, metade2, soma_metades;

  scanf("%d %d", &n, &m);

    for(i = n + 1; i < m; i++){
      a = i / 1000;
      b = (i % 1000) / 100;
      c = ((i % 1000) % 100) / 10;
      d = (((i % 1000) % 100) % 10);


      metade1 = (a * 10) + b;
      metade2 = (c * 10) + d;
      soma_metades = metade1 + metade2;

      if (soma_metades * soma_metades == i){
        printf("%d\n", i);
      }

    }
}