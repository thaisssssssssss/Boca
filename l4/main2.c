#include <stdio.h>
#include "tData.h"

int main(){
    tData dataInicial, dataFinal;

    dataInicial = leData();
    dataFinal = leData();

    while(1){
        ImprimeData(dataInicial);
        dataInicial = mudaData(dataInicial);
        if(dataInicial.dia == dataFinal.dia && dataInicial.mes == dataFinal.mes && dataInicial.ano == dataFinal.ano){
            break;
        }
    }
}