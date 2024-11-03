#include <stdio.h>

int main(){
int qtd = 0, i = 0, a = 0, b = 0, dentro = 0, fora = 0;

	scanf("%d", &qtd);
	
int num[qtd];

	for(i = 0; i < qtd; i++){
		scanf("%d", &num[i]);
	}
	
	scanf("%d %d", &a, &b);
	
	for(i  = 0; i < qtd; i++){
		if(num[i] >= a && num[i] <= b){
			dentro++;
		}
		else{
			fora++;
		}
	}

	printf("%d %d", dentro, fora);
}
