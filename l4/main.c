#include <stdio.h>
#include "tProduto.h"

int main(){
    int n, i;
    tProduto produto;
    tProduto maior, menor;
    int maiorP, menorP;
    int estoque;

    maior.preco = 0;
    menor.preco = 1000;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i != n){
            scanf("\n");
        }
        produto = LeProduto();
        
            maiorP = EhProduto1MaiorQ2(produto, maior);
            if(maiorP){
                maior = produto;
            }
            menorP = EhProduto1MenorQ2(produto, menor);
            if(menorP){
                menor = produto;
            }
       
        estoque = TemProdutoEmEstoque(produto);
        if(estoque){
            printf("FALTA:");
            ImprimeProduto(produto);
        }
    }

    printf("MAIOR:");
    ImprimeProduto(maior);
    printf("MENOR:");
    ImprimeProduto(menor);
 }