#include <stdio.h>
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

int identificaQuadrante(tPonto p){
    if(p.x == 0 || p.y == 0){
        return 0;
    }
    else if(p.x > 0 && p.y > 0){
        return 1;
    }
    else if(p.x > 0 && p.y < 0){
        return 4;
    }
    else if(p.x < 0 && p.y < 0){
        return 3;
    }
    else if(p.x < 0 && p.y > 0){
        return 2;
    }
}

void imprimeQuadrante(int qi, int qf){
    if(qi == 0 || qf == 0){
        printf("DIFERENTE\n");
    }
    else if(qi == qf){
        printf("MESMO\n");
    }
    else{
        printf("DIFERENTE\n");
    }
}

void verificaQuadrante(tReta r){
    tPonto pi, pf;
    int qi, qf;

    pi = obtemPontoInicial(r);
    pf = obtemPontoFinal(r);

    qi = identificaQuadrante(pi);
    qf = identificaQuadrante(pf);

    imprimeQuadrante(qi, qf);
}

int main(){
    tReta reta;

    int qtdNum, i; 

    scanf("%d", &qtdNum);

    for(i = 0; i < qtdNum; i++){

        reta = inicializaReta(reta);
        reta = recebeReta(reta);
        verificaQuadrante(reta);
    }
    return 0;
}