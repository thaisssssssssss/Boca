#include <stdio.h>

typedef struct{
    int codigo;
    float preco;
    int qtd;
}tProduto;

 tProduto LeProduto();
 int EhProduto1MaiorQ2(tProduto p1, tProduto p2);
 int EhProduto1MenorQ2(tProduto p1, tProduto p2); 
 int TemProdutoEmEstoque(tProduto p);
 void ImprimeProduto(tProduto p);

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

 tProduto LeProduto(){
    tProduto prod;
    scanf("%d;%f;%d", &prod.codigo, &prod.preco, &prod.qtd);
    return prod;
 }

 int EhProduto1MaiorQ2(tProduto p1, tProduto p2){
    if(p1.preco > p2.preco){
        return 1;
    }
    else{
        return 0;
    }
 }

 int EhProduto1MenorQ2(tProduto p1, tProduto p2){
    if(p1.preco < p2.preco){
        return 1;
    }
    else{
        return 0;
    }
 } 

  int TemProdutoEmEstoque(tProduto p){
    if(p.qtd == 0){
        return 1;
    }
    else{
        return 0;
    }
  }

  void ImprimeProduto(tProduto p){
    printf("COD %d, PRE %.2f, QTD %d\n", p.codigo, p.preco, p.qtd);
  }