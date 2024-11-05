#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}   tPonto;

typedef struct{
    tPonto pi;
    tPonto pf;
}   tReta;

tPonto inicializaPonto(tPonto p){
    p.x = 0;
    p.y = 0;
    return p;
}

tReta inicializaReta(tReta r){
    r.pi = inicializaPonto(r.pi);
    r.pf = inicializaPonto(r.pf);
    return r;
}

tPonto recebePonto(tPonto p){
    scanf("%d %d", &p.x, &p.y);
    return p;
}

tReta recebeReta(tReta r){
    r.pi = recebePonto(r.pi);
    r.pf = recebePonto(r.pf);
    return r;
}

tPonto obtemPontoInicial(tReta r){
    return r.pi;
}

tPonto obtemPontoFinal(tReta r){
    return r.pf;
}

float calculaDistancia(tPonto p1, tPonto p2){
    float x, y, delta;
    x = p1.x - p2.x;
    y = p1.y - p2.y;
    delta = sqrt(pow(x,2) + pow(y,2));

    return delta;
}

void imprimeDistancia(int di, int df){
    if(di == df){
        printf("EQUIDISTANTE\n");
    }
    else if(di > df){
        printf("FIM\n");
    }
    else{
        printf("INICIO\n");
    }
}

void verificaDistancia(tReta r, tPonto p){
    float di, df;
    tPonto pInicial, pFinal;
    pInicial = obtemPontoInicial(r);
    pFinal = obtemPontoFinal(r);
    di = calculaDistancia(pInicial, p);
    df = calculaDistancia(pFinal, p);
    imprimeDistancia(di, df);
}


int main(){
    tPonto ponto;
    tReta reta;

    int qtdNum, i; 

    scanf("%d", &qtdNum);

    for(i = 0; i < qtdNum; i++){

        ponto = inicializaPonto(ponto);
        reta = inicializaReta(reta);

        ponto = recebePonto(ponto);
        reta = recebeReta(reta);
            
        verificaDistancia(reta, ponto);
    }
    return 0;
}