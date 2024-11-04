#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}   tPonto;

tPonto inicializaPonto(){
    tPonto p;
    p.x = 0;
    p.y = 0;
    return p;
}

tPonto recebePonto(tPonto p){
    scanf("%d %d", &p.x, &p.y);
    return p;
}

tPonto mudaCoordenadas(tPonto p1, tPonto p2){
    p1.x = p2.x;
    p1.y = p2.y;
    return p1;
}

void calculaDistancia(tPonto p1, tPonto p2){
    float x, y, delta;
    x = p1.x - p2.x;
    y = p1.y - p2.y;
    delta = sqrt(pow(x,2) + pow(y,2));

    printf("%.2f\n", delta);
}

int main(){
    tPonto predecessor, pontoAtual;
    int qtdNum, i; 
    float distancia;

    scanf("%d", &qtdNum);

    for(i = 0; i < qtdNum; i++){

        if(i == 0){
            predecessor = inicializaPonto();
            predecessor = recebePonto(predecessor);
            printf("-\n");
        }
        else{
            pontoAtual = inicializaPonto();
            pontoAtual = recebePonto(pontoAtual);
            calculaDistancia(predecessor, pontoAtual);
            predecessor = inicializaPonto();
            predecessor = mudaCoordenadas(predecessor, pontoAtual);
        }
    }
    return 0;
}