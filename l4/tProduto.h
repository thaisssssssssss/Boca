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