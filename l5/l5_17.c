#include <stdio.h>
int main(){
char matriz[500][500];
int i = 0, j = 0;

  while(scanf("%[a-zA-z]", matriz[i]) == 1){
    i++;
    scanf("%*[^a-z^A-Z]");
  }

  for(j = i; j >= 0; j--){
    printf("%s ", matriz[j]);
  }

 return 0; 
}