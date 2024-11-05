#include "tProduto.h"

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