#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}   tData;

tData leData(){
    tData data;
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
    return data;
}

int ehAnoBissexto(int ano){
    return (ano % 4 == 0);
}

tData acertaData(tData data, int bissexto){
    if(data.mes > 12){
        data.mes = 12;
    }
    else if(data.mes < 1){
        data.mes = 1;
    }

    if(data.dia < 1){
        data.dia = 1;
    }
    else if(data.dia > 28 && data.mes == 2 && bissexto == 0){
        data.dia = 28;
    }
    else if(data.dia > 29 && data.mes == 2 && bissexto == 1){
        data.dia = 29;
    }
    else if(data.dia > 30 && data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11){
        data.dia == 30;
    }
    else{
        if(data.dia > 31){
            data.dia = 31;
        }
        else{
            data.dia = data.dia;
        }
    }
    return data;
}

int trocaDia(tData data, int bissexto){
    if(data.mes == 2){
        if(bissexto == 1){
            if(data.dia < 29){
                data.dia++;
            }
            else{
                data.dia = 1;
            }
        }
        else{
            if(data.dia < 28){
                data.dia++;
            }
            else{
                data.dia = 1;
            }
        }
    }
    else if(data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11){
            if(data.dia < 30){
                data.dia++;
            }
            else{
                data.dia = 1;
            }
    }
    else{
            if(data.dia < 31){
                data.dia++;
            }
            else{
                data.dia = 1;
            }
    }
    return data.dia;
}

int trocaMes(tData data){
    if(data.dia == 1){
        if(data.mes < 12){
            data.mes++;
        }
        else{
            data.mes = 1;
        }
    }
    return data.mes;
}

int trocaAno(tData data){
    if(data.dia == 1 && data.mes == 1){
        data.ano++;
    }
    return data.ano;
}

tData mudaData(tData data){
    int bissexto;
    bissexto = ehAnoBissexto(data.ano);
    data = acertaData(data, bissexto);
    data.dia = trocaDia(data, bissexto);
    data.mes = trocaMes(data);
    data.ano = trocaAno(data);
    return data;
}

void ImprimeData(tData data){
    printf("'%02d/%02d/%04d'\n", data.dia, data.mes, data.ano);
}

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