#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}   tData;

tData leData();
int ehAnoBissexto(int ano);
tData acertaData(tData data, int bissexto);
int trocaDia(tData data, int bissexto);
int trocaMes(tData data);
int trocaAno(tData data);
tData mudaData(tData data);
void ImprimeData(tData data);