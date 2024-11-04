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

void ImprimeCordenadas(tPonto p){
    printf("(%d,%d) ", p.x, p.y);
}

int IdentificaQuadrante(tPonto p){
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

int mudaPontoX(int x){
    x = -x;
    return x;
}

int mudaPontoY(int y){
    y = -y;
    return y;
}

int retornaX(tPonto p){
    return p.x;
}

int retornaY(tPonto p){
    return p.y;
}

tPonto mudaCoordenadas(tPonto p){
    p.x = mudaPontoX(p.x);
    p.y = mudaPontoY(p.y);
    return p;
}

int calculaDistancia(tPonto p1, tPonto p2){
    int x, y, delta;
    x = p1.x - p2.x;
    y = p1.y - p2.y;
    delta = sqrt(pow(x,2) + pow(y,2));

    return delta;
}

int main(){
    tPonto p1, p2;
    int qtdNum, i, quadrante, distancia;

    scanf("%d", &qtdNum);

    for(i = 0; i < qtdNum; i++){
        p1 = inicializaPonto();
        p2 = inicializaPonto();

        p1 = recebePonto(p1);
        ImprimeCordenadas(p1);
        quadrante = IdentificaQuadrante(p1);
        printf("%d ", quadrante);

        p2 = mudaCoordenadas(p1);
        ImprimeCordenadas(p2);
        quadrante = IdentificaQuadrante(p2);
        printf("%d\n", quadrante);

        distancia = calculaDistancia(p1, p2);
    }
}